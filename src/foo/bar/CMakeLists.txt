# Liste des fichiers source spécifiques à bar
set(BAR_SOURCES
    Bar.cpp
    # Ajoutez d'autres fichiers source pour "bar" si nécessaire
)

# Créez une bibliothèque (librairie statique ou dynamique) pour bar
add_library(bar_lib ${BAR_SOURCES})

# Inclusion du dossier "include" comme dossier d'en-tête global pour cette bibliothèque
target_include_directories(bar_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)
