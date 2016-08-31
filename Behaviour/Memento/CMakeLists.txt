cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(memento VERSION 0.1 LANGUAGES CXX)

set(_ECLIPSE_VERSION "4.5")
###############################################################################
## os #########################################################################
###############################################################################

if(WIN32)
	message(STATUS "#ENV: System OS = WINDOWS")
endif(WIN32)

if(UNIX) 
	message(STATUS "#ENV: System OS = UNIX")
endif(UNIX)

###############################################################################
## target definitions #########################################################
###############################################################################

file(GLOB SOURCES
 	main.cpp
 	inc/*.h
 	src/*.cpp)
 
message("Following sources found:")
foreach(a ${SOURCES})
  message("${a}")
endforeach()

#Generate the shared library from the sources
add_executable(memento ${SOURCES})

#Set Debug or Release
set(CMAKE_BUILD_TYPE Debug)

###############################################################################
## compiler definitions########################################################
###############################################################################

#enable c++11 and set it required
set_property(TARGET memento PROPERTY CXX_STANDARD 11)
set_property(TARGET memento PROPERTY CXX_STANDARD_REQUIRED ON)

###############################################################################
## dependencies ###############################################################
###############################################################################

include_directories()
link_directories()
target_link_libraries(memento )

###############################################################################
## clean ######################################################################
###############################################################################
if(UNIX)
    add_custom_target (distclean @echo cleaning generated cmake-files)
    add_custom_command(
        COMMENT "cmake generated clean"
        COMMAND make ARGS -C ${CMAKE_CURRENT_BINARY_DIR} clean
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "CMakeCache.txt" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "CMakeFiles" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "Makefile" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "*.cmake" | xargs rm -rf
        COMMAND rm ARGS -rf ${CMAKE_CURRENT_BINARY_DIR}/install_manifest.txt
        TARGET  distclean)

    add_custom_target (projclean @echo cleaning generated project-files)
    add_custom_command(
        COMMENT "project generated clean"
        COMMAND make ARGS -C ${CMAKE_CURRENT_BINARY_DIR} clean
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name ".project" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name ".cproject" | xargs rm -rf
        TARGET  projclean)

    add_custom_target (clean-all @echo cleaning generated project- and cmake-files)
    add_custom_command(
        COMMENT "cmake & project generated clean"
        COMMAND make ARGS -C ${CMAKE_CURRENT_BINARY_DIR} clean
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name ".project" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name ".cproject" | xargs rm -rf
        COMMAND make ARGS -C ${CMAKE_CURRENT_BINARY_DIR} clean
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "CMakeCache.txt" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "CMakeFiles" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "Makefile" | xargs rm -rf
        COMMAND find ARGS ${CMAKE_CURRENT_BINARY_DIR} -name "*.cmake" | xargs rm -rf
        COMMAND rm ARGS -rf ${CMAKE_CURRENT_BINARY_DIR}/install_manifest.txt
        TARGET  clean-all)
endif(UNIX)




