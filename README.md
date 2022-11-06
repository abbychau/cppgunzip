```bash
#(windows 11 + visual studio 2022)
conan profile new default --detect
#conan profile update settings.compiler.libcxx=libstdc++11 default
conan profile remove settings.compiler.libcxx default 

mkdir build
conan install .. --build=missing
cmake --build . --config Release
cmake .. -G "Visual Studio 17"
cmake --build . --config Release
```