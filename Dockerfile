FROM alpine:latest AS builder

# Installer les outils nécessaires
RUN apk add --no-cache \
    build-base \
    cmake \
    python3 \
    py3-pip \
    python3-dev \
    libffi-dev \
    openssl-dev \
    git

# Créer un environnement Python virtuel et installer conan
RUN python3 -m venv /opt/venv && \
    . /opt/venv/bin/activate && \
    pip install --upgrade pip setuptools conan && \
    conan profile detect --force

# Configurer le répertoire de travail
WORKDIR /app

# Copier les fichiers source
COPY . .

# Installer les dépendances et compiler le projet
RUN mkdir -p build/Release && \
    . /opt/venv/bin/activate && \
    conan install . --build=missing -s build_type=Release && \
    cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW \
          -DCMAKE_BUILD_TYPE=Release \
          -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake \
          -S . -B build/Release && \
    cmake --build build/Release

# Étape 2 : Image finale minimale
FROM alpine:latest

# Installer les bibliothèques nécessaires à l'exécution
RUN apk add --no-cache libstdc++

# Configurer le répertoire de travail
WORKDIR /app

# Copier le binaire depuis l'image de construction
COPY --from=builder /app/build/Release/src/MonProjetCpp .

# Définir le point d'entrée
CMD ["./MonProjetCpp"]
