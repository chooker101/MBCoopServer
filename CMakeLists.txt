cmake_minimum_required(VERSION 3.13)
project(MBCoopServer CXX)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release")

add_definitions(-D_WIN32_WINNT=0x0601)

set_property(GLOBAL PROPERTY USE_FOLDERS ON) # enables folder structures in IDEs
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(Tools/vs_filter_structure.cmake)

add_subdirectory(Externals)
add_subdirectory(Projects)