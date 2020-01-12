cmake_minimum_required(VERSION 3.16.1 FATAL_ERROR)

project(CobreTest)

set(sources)
set(headers)
set(links)

add_subdirectory(lib)
add_subdirectory(src)

link_directories(${links})
message(STATUS ${links})

add_executable(${PROJECT_NAME} ${sources} ${headers})

target_link_libraries(${PROJECT_NAME} cobre)
