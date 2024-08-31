## Conan install
```sh
sudo apt update && upgrade
sudo apt install python3 python3-pip ipython3
pip install conan

conan version
conan profile detect --force
```
If conan command not found
```sh
export PATH=$PATH:~/.local/bin
```

## Build project
Write conanfile.txt
```txt
[requires]
gtest/1.15.0

[generators]
CMakeDeps
CMakeToolchain

[layout]
cmake_layout
```

Debug
```sh
conan install . --build=missing -s build_type=Debug
cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Debug -DCMAKE_TOOLCHAIN_FILE=build/Debug/generators/conan_toolchain.cmake -S. -Bbuild/Debug -G "Unix Makefiles"
cmake --build build/Debug
```



Release
```sh
conan install . --build=missing -s build_type=Release
cmake -DCMAKE_POLICY_DEFAULT_CMP0091=NEW -DCMAKE_BUILD_TYPE=Release -DCMAKE_TOOLCHAIN_FILE=build/Debug/generators/conan_toolchain.cmake -S. -Bbuild/Release -G "Unix Makefiles"
cmake --build build/Release
```

## Run Project
Run Debug
``` sh
./build/Debug/src/MonProjetCpp
```

Run Release
``` sh
./build/Release/src/MonProjetCpp
```

## Test
After build Debug
```sh
cd ./build/Debug
ctest -V
cd ../..
```