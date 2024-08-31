cmake_minimum_required(VERSION 3.12)

project(MonProjetCpp)

# Spécifiez le standard C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Inclusion des sous-projets
add_subdirectory(src)
add_subdirectory(tests)