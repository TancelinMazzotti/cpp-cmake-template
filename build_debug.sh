#!/bin/bash
mkdir -p build/Debug
conan install . --build=missing -s build_type=Debug
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=build/Debug/generators/conan_toolchain.cmake -S . -B build/Debug
cmake --build build/Debug
