include_directories (${TEMPLATE_DEMO_SOURCE_DIR}/include/LibA)
# Make sure the linker can find the Hello library once it is built.
link_directories (${HELLO_BINARY_DIR}/LibA)


add_executable(demoB src/main_demoB.cpp)
target_link_libraries (demoB ClassA)


# Make sure the compiler can find include files from our Hello library.
#include_directories (${HELLO_SOURCE_DIR}/Hello)


# Add executable called "helloDemo" that is built from the source files
# "demo.cxx" and "demo_b.cxx". The extensions are automatically found.
#add_executable (helloDemo demo.cxx demo_b.cxx)

# Link the executable to the Hello library.
#target_link_libraries (helloDemo Hello)
