include_directories(${PROJECT_SOURCE_DIR}/include/LibA)
# Make sure the linker can find the Hello library once it is built.
link_directories(${PROJECT_BINARY_DIR}/LibA)


FIND_PACKAGE(Boost COMPONENTS thread REQUIRED )
INCLUDE_DIRECTORIES( ${Boost_INCLUDE_DIR} )


add_executable(demoA src/main_demoA.cpp)
add_executable(demoThread src/main_boost_thread.cpp)

TARGET_LINK_LIBRARIES(demoThread ClassA)
TARGET_LINK_LIBRARIES(demoA ClassA)
TARGET_LINK_LIBRARIES(demoThread ${Boost_LIBRARIES})

# Make sure the compiler can find include files from our Hello library.
#include_directories (${HELLO_SOURCE_DIR}/Hello)


# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
#add_executable (helloDemo demo.cxx demo_b.cxx)

# Link the executable to the Hello library.
#target_link_libraries (helloDemo Hello)
