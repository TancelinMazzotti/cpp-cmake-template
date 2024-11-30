# C++ Project Template

Ce projet sert de template pour vos projets C++ et inclut une configuration complète avec **CMake**, **Conan**, **Doxygen**, et **Google Test (GTest)**.  

## Structure du Projet

Voici la structure de base de ce template :
```
MonProjetCpp/
├── src/              # Code source principal
├── include/          # Fichiers d'en-tête
├── tests/            # Tests unitaires
├── CMakeLists.txt    # Fichier de configuration CMake
├── conanfile.txt     # Configuration des dépendances Conan
├── build/            # Répertoire de build
└── docs/             # Documentation générée
```

## Prérequis

Avant de commencer, assurez-vous d'avoir installé les outils suivants :
- **Python 3** et **pip**
- **Conan** (gestionnaire de dépendances)
- **CMake** (générateur de projets)
- **GNU Make** ou tout autre système de build compatible avec CMake  

### Installation de Conan

```sh
sudo apt update && sudo apt upgrade
sudo apt install python3 python3-pip ipython3
pip install conan

# Vérifiez l'installation
conan --version

# Détection du profil système
conan profile detect --force
```

> **Remarque** : Si la commande `conan` n'est pas trouvée, ajoutez le chemin approprié à votre environnement :
```sh
export PATH=$PATH:~/.local/bin
```

---

## Configuration du Projet

Créez un fichier `conanfile.txt` dans le répertoire racine du projet avec le contenu suivant :

```txt
[requires]
gtest/1.15.0

[generators]
CMakeDeps
CMakeToolchain

[layout]
cmake_layout
```

---

## Construction du Projet

### Debug

Pour construire le projet en mode **Debug** :
```sh
conan install . --build=missing -s build_type=Debug
cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=build/Debug/generators/conan_toolchain.cmake -S . -B build/Debug -G "Unix Makefiles"
cmake --build build/Debug
```

### Release

Pour construire le projet en mode **Release** :
```sh
conan install . --build=missing -s build_type=Release
cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake -S . -B build/Release -G "Unix Makefiles"
cmake --build build/Release
```

---

## Exécution

### En mode Debug
```sh
./build/Debug/src/MonProjetCpp
```

### En mode Release
```sh
./build/Release/src/MonProjetCpp
```

---

## Tests

Les tests unitaires sont configurés avec **Google Test**. Après avoir construit le projet en mode **Debug**, exécutez les tests comme suit :

```sh
cd ./build/Debug
ctest -V
cd ../..
```

---

## Documentation

Pour générer une documentation avec **Doxygen** :
1. Assurez-vous que Doxygen est installé sur votre système.
2. Ajoutez un fichier `Doxyfile` dans le répertoire racine (vous pouvez le générer avec la commande `doxygen -g`).
3. Exécutez :
   ```sh
   doxygen Doxyfile
   ```
4. Consultez la documentation générée dans le répertoire configuré (par défaut `docs/`).

---
