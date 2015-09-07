cmake_minimum_required ( VERSION 2.6 )
project ( cs585 C CXX )

set( cs585_VERSION_MAJOR 0 )
set( cs585_VERSION_MINOR 1 )

# GTest libraries
find_package( GTest REQUIRED )
find_package( Threads REQUIRED )

include_directories( ${GTEST_INCLUDE_DIRS} )
include_directories( $(PROJECT_SOURCE_DIR)/src )

# Normal executable
add_executable( cs585 game.m.cpp )

# Test executable
set( test_sources ${PROJECT_SOURCE_DIR}/src/test/test0.cpp )
add_executable( cs585-test ${test_sources} )

target_link_libraries( cs585_test ${GTEST_BOTH_LIBRARIES} )
target_link_libraries( cs585_test ${CMAKE_THREAD_LIBS_INIT} )
