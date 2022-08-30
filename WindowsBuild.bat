@echo off
if NOT exist build\ (mkdir build)

cmake -G "MinGW Makefiles" -B .\build
cmake --build .\build