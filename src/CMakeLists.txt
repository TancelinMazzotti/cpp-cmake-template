# Liste des fichiers source principaux
set(MAIN_SOURCE
    main.cpp
)

# Définition de l'exécutable avec le nom du projet
add_executable(${PROJECT_NAME}
    ${MAIN_SOURCE}
)

# Inclusion du dossier "include" comme dossier d'en-tête global pour cette bibliothèque
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)

# Inclusion des sous-projets (espaces de noms)
add_subdirectory(foo)
add_subdirectory(baz)

# Lien des bibliothèques avec le projet principal
target_link_libraries(${PROJECT_NAME} PRIVATE foo_lib)
target_link_libraries(${PROJECT_NAME} PRIVATE baz_lib)
