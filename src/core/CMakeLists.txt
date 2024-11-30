# Liste des fichiers source spécifiques à core
set(CORE_SOURCES
    App.cpp
    # Ajoutez d'autres fichiers source pour "core" si nécessaire
)

# Créez une bibliothèque (librairie statique ou dynamique) pour core
add_library(core_lib ${CORE_SOURCES})

# Inclusion du dossier "include" comme dossier d'en-tête global pour cette bibliothèque
target_include_directories(core_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)