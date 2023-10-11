# Liste des fichiers source spécifiques à foo
set(FOO_SOURCES
    Foo.cpp
    # Ajoutez d'autres fichiers source pour "foo" si nécessaire
)

# Créez une bibliothèque (librairie statique ou dynamique) pour foo
add_library(foo_lib ${FOO_SOURCES})

# Inclusion du dossier "include" comme dossier d'en-tête global pour cette bibliothèque
target_include_directories(foo_lib PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Ajout du sous-projet "bar"
add_subdirectory(bar)

# Lien de la bibliothèque "foo_lib" avec la bibliothèque "bar_lib"
target_link_libraries(foo_lib PRIVATE bar_lib)