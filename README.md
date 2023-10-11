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

Debug
```sh
conan install . --output-folder=build --build=missing -s build_type=Debug
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```

Release
```sh
conan install . --output-folder=build --build=missing -s build_type=Release
cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

Test
After build
```sh
ctest -V
```