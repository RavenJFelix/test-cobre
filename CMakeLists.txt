cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

project(CobreTest)

set(sources)
set(headers)

add_subdirectory(lib/cobre)
add_subdirectory(src)

add_executable(${PROJECT_NAME} 
