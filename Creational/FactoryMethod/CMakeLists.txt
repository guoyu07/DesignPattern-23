cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(FactoryMethod VERSION 0.1 LANGUAGES CXX)

set(_ECLIPSE_VERSION "3.8")

###############################################################################
## file globbing ##############################################################
###############################################################################

file(GLOB SOURCES
 inc/*.hpp
 inc/product/*.hpp
 inc/factory/*.hpp
 
 src/product/*.cpp
 src/factory/*.cpp
 src/*.cpp
 
 )
 

#to take control which files are used, dont go recursive through
#file(GLOB_RECURSE SOURCES src/*.cpp inc/*.h)

message("Following sources found:")
foreach(a ${SOURCES})
  message("${a}")
endforeach()

###############################################################################
## target definitions #########################################################
###############################################################################

#Generate the shared library from the sources
add_executable(FactoryMethod ${SOURCES})

#Set Debug or Release
set(CMAKE_BUILD_TYPE Debug)

# just for example add some compiler flags
#target_compile_options(crawler PUBLIC -Wextra)

###############################################################################
## compiler definitions########################################################
###############################################################################

#enable c++11 and set it required
set_property(TARGET FactoryMethod PROPERTY CXX_STANDARD 11)
set_property(TARGET FactoryMethod PROPERTY CXX_STANDARD_REQUIRED ON)

#project(SpiderBite CXX)
#message("Your C++ compiler supports these C++ features:")
#foreach(i ${CMAKE_CXX_COMPILE_FEATURES})
#  message("${i}")
#endforeach()


###############################################################################
## dependencies ###############################################################
###############################################################################

# GTK+
#find_package(PkgConfig REQUIRED)
#pkg_check_modules(GTK3 REQUIRED gtk+-3.0)
#add_definitions(${GTK3_CFLAGS_OTHER})

# BOOST
#set(Boost_USE_STATIC_LIBS OFF) 
#set(Boost_USE_MULTITHREADED ON)  
#set(Boost_USE_STATIC_RUNTIME OFF) 
#find_package(Boost 1.61 EXACT COMPONENTS system regex date_time log log_setup REQUIRED)

#ADD_DEFINITIONS(-DBOOST_LOG_DYN_LINK)

# THREADS
#set(THREADS_PREFER_PTHREAD_FLAG ON)
#find_package(Threads REQUIRED)

#CURL_INCLUDE_DIRS   		- where to find curl/curl.h, etc.
#CURL_LIBRARIES      		- List of libraries when using curl.
#CURL_FOUND          		- True if curl found.
#CURL_VERSION_STRING 		- the version of curl found (since CMake 2.8.8)
#find_package(CURL REQUIRED)
#message(STATUS "CURL Version: ${CURL_VERSION_STRING}")

#include_directories(${GTK3_INCLUDE_DIRS} ${Boost_INCLUDE_DIRS} ${CURL_INCLUDE_DIRS})
#include_directories(${GTK3_INCLUDE_DIRS})

#link_directories(${GTK3_LIBRARY_DIRS} ${Boost_LIBRARIES} ${CURL_LIBRARIES})
#link_directories(${GTK3_LIBRARY_DIRS})

#target_link_libraries(SpiderBite ${GTK3_LIBRARIES} ${Boost_LIBRARIES} Threads::Threads ${CURL_LIBRARIES} )
target_link_libraries(FactoryMethod ${CMAKE_THREAD_LIBS_INIT})
