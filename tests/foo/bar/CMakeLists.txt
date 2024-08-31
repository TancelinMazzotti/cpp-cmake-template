# Indiquez la version minimale de CMake requise
cmake_minimum_required(VERSION 3.12)

# Liste des fichiers source spécifiques aux tests de Bar
set(TEST_SOURCES
    BarTest.cpp
    # Ajoutez d'autres fichiers de test si nécessaire
)

# Créez l'exécutable de test pour Bar
add_executable(BarTests ${TEST_SOURCES})

# Incluez le dossier "include" du projet principal pour accéder aux fichiers d'en-tête
target_include_directories(BarTests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Lien avec les bibliothèques nécessaires (par exemple, foo_lib, gtest, gtest_main)
target_link_libraries(BarTests PRIVATE bar_lib GTest::gtest GTest::gtest_main)

add_test(NAME BarTest COMMAND BarTests)