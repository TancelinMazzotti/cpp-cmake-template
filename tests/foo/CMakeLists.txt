# Indiquez la version minimale de CMake requise
cmake_minimum_required(VERSION 3.12)

# Liste des fichiers source spécifiques aux tests de Foo
set(TEST_SOURCES
    FooTest.cpp
    # Ajoutez d'autres fichiers de test si nécessaire
)

# Créez l'exécutable de test pour Foo
add_executable(FooTests ${TEST_SOURCES})

# Incluez le dossier "include" du projet principal pour accéder aux fichiers d'en-tête
target_include_directories(FooTests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Lien avec les bibliothèques nécessaires (par exemple, foo_lib, gtest, gtest_main)
target_link_libraries(FooTests PRIVATE foo_lib gtest::gtest)

add_test(NAME FooTest COMMAND Tests)