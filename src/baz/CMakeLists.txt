# Liste des fichiers source spécifiques à baz
set(BAZ_SOURCES
    Baz.cpp
    Bazbis.cpp
    # Ajoutez d'autres fichiers source pour "baz" si nécessaire
)

# Créez une bibliothèque (librairie statique ou dynamique) pour baz
add_library(baz_lib ${BAZ_SOURCES})

# Inclusion du dossier "include" comme dossier d'en-tête global pour cette bibliothèque
target_include_directories(baz_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)