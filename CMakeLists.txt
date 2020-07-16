# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Lamb-gine")

# Include sub-projects.
add_subdirectory ("Lamb-gine")

# Set any compiler-specific settings
if (WIN32)
	set(CMAKE_CXX_FLAGS "/DWIN32 /D_WINDOWS /W3 /GR /EHsc /wd26812 /w34456 /w34457 /w34458 /w34459 /w35038")
	set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} /ignore:4099 /ignore:4075")
elseif(UNIX)
	set(CMAKE_CXX_FLAGS "-Wall")
	find_library(COREFOUNDATION_LIBRARY CoreFoundation)
	find_library(OPENGL_LIBRARY OpenGL)
endif()
