# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 2.6)

# Set the project name
project (dynamic_polymorphism)

# Create a sources variable with a link to all cpp files to compile
set(SOURCES
    src/trinagle.cpp
	src/rectangle.cpp	
    src/main.cpp
)


# Add an executable
add_executable(dynamic_polymorphism ${SOURCES})

# Set the direcoties that should be included in the build command for this target
target_include_directories(dynamic_polymorphism
    PRIVATE ${PROJECT_SOURCE_DIR}/include
)
