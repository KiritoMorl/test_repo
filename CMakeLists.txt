cmake_minimum_required(VERSION 3.5.0)
project(degree_conventer VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_executable(degree_conventer main.cpp)
target_link_libraries(degree_conventer degree_converter_lib)
add_subdirectory(lib)

enable_testing()
add_subdirectory(tests)