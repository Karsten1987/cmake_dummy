# The name of our project is "HELLO". CMakeLists files in this project can 
# refer to the root source directory of the project as ${HELLO_SOURCE_DIR} and 
# to the root binary directory of the project as ${HELLO_BINARY_DIR}. 
cmake_minimum_required (VERSION 2.6) 
project (cmake_dummy)

MESSAGE("source dir "${PROJECT_SOURCE_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)


# Make sure the compiler can find include files from our Hello library.
include_directories (${PROJECT_SOURCE_DIR}/include)

# Make sure the linker can find the Hello library once it is built.
link_directories (${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

add_subdirectory (LibA)
add_subdirectory (DemoA)
add_subdirectory (DemoB)


