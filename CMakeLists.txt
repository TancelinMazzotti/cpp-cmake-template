cmake_minimum_required(VERSION 3.12)

project(MonProjetCpp)

# Spécifiez le standard C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Lib extern
find_package(ZLIB REQUIRED)
find_package(GTest REQUIRED)

# Active la prise en charge des tests
enable_testing()

# Liste des fichiers source principaux
set(MAIN_SOURCE
    src/main.cpp
)

# Définition de l'exécutable avec le nom du projet
add_executable(${PROJECT_NAME}
    ${MAIN_SOURCE}
)

# Définition des fichiers d'en-tête
target_include_directories(${PROJECT_NAME} PRIVATE include)



# Inclusion des sous-projets (espaces de noms)
add_subdirectory(src/foo)
add_subdirectory(src/baz)


add_subdirectory(tests)

# Lien des bibliothèques avec le projet principal
target_link_libraries(${PROJECT_NAME} PRIVATE foo_lib)
target_link_libraries(${PROJECT_NAME} PRIVATE baz_lib)
