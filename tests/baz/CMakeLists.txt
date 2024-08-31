# Indiquez la version minimale de CMake requise
cmake_minimum_required(VERSION 3.12)

# Liste des fichiers source spécifiques aux tests de Foo
set(TEST_SOURCES
    BazTest.cpp
    BazbisTest.cpp
    # Ajoutez d'autres fichiers de test si nécessaire
)

# Créez l'exécutable de test pour Foo
add_executable(BazTests ${TEST_SOURCES})

# Incluez le dossier "include" du projet principal pour accéder aux fichiers d'en-tête
target_include_directories(BazTests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Lien avec les bibliothèques nécessaires (par exemple, foo_lib, gtest, gtest_main)
target_link_libraries(BazTests PRIVATE baz_lib foo_lib GTest::gtest GTest::gtest_main)

add_test(NAME BazTest COMMAND BazTests)
add_test(NAME BazbisTest COMMAND BazTests)