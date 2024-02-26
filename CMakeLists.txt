cmake_minimum_required(VERSION 3.10)
project (JanProgrammingLang)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)

add_executable(JanLangExecutable src/Main.cpp src/Tokenization.cpp)