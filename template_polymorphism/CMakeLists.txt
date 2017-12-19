# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 2.6)

set(INSTALL_DIR "/tmp/")


#Release - Adds the -O3 -DNDEBUG flags to the compiler
#Debug - Adds the -g flag
#MinSizeRel - Adds -Os -DNDEBUG
#RelWithDebInfo - Adds -O2 -g -DNDEBUG flags



# Set the project name
project (template_polymorphism)

message(STATUS "Setting default CMAKE_INSTALL_PREFIX path to ${INSTALL_DIR}")
set(CMAKE_INSTALL_PREFIX "${INSTALL_DIR}" CACHE STRING "The path to use for make install" FORCE)


# Set a default build type if none was specified
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
  message("Setting build type to 'RelWithDebInfo' as none was specified.")
  set(CMAKE_BUILD_TYPE Debug CACHE STRING "Choose the type of build." FORCE)
  # Set the possible values of build type for cmake-gui
  set_property(CACHE CMAKE_BUILD_TYPE PROPERTY STRINGS "Debug" "Release"
    "MinSizeRel" "RelWithDebInfo")
endif()

# find the cppcheck binary
find_package(CppCheck)
 

# Source files to be used in the library
set(library_SOURCES
	src/dog.cpp
	src/cat.cpp	
)

#Generate the static library from the library sources
add_library(template_polymorphism_lib STATIC ${library_SOURCES})

# Set the direcoties that should be included in the build command for this target
target_include_directories(template_polymorphism_lib
    PUBLIC  ${PROJECT_SOURCE_DIR}/include
)


# Source fles for the binary
set(binary_SOURCES
    src/main.cpp
)
# Add an executable
add_executable(template_polymorphism_bin ${binary_SOURCES})


target_link_libraries( template_polymorphism_bin
    PRIVATE template_polymorphism_lib
)



# Binaries
install (TARGETS template_polymorphism_bin
    DESTINATION bin)

#Library

install (TARGETS template_polymorphism_lib
	ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib)
   
#Config
install (FILES test.conf
    DESTINATION etc)
	
	
	