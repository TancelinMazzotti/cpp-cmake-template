#!/bin/bash
mkdir -p build/Release
conan install . --build=missing -s build_type=Release
cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=build/Release/generators/conan_toolchain.cmake -S . -B build/Release -G "Unix Makefiles"
cmake --build build/Release