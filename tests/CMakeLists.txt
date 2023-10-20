# Indiquez la version minimale de CMake requise
cmake_minimum_required(VERSION 3.12)

# Créez un sous-projet pour les tests
project(Tests)

# Liste des fichiers source spécifiques aux tests
set(TEST_SOURCES
    main_test.cpp
    # Ajoutez d'autres fichiers de test si nécessaire
)

# Créez l'exécutable de test
add_executable(Tests ${TEST_SOURCES})

# Incluez le dossier "include" du projet principal pour accéder aux fichiers d'en-tête
target_include_directories(Tests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Incluez les sous-projets (espaces de noms) pour les tests
add_subdirectory(foo)  # Ajoutez d'autres sous-projets si nécessaire

# Lien avec les bibliothèques nécessaires (par exemple, foo_lib, gtest, gtest_main)
target_link_libraries(Tests PRIVATE GTest::GTest GTest::Main)
