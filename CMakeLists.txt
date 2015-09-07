cmake_minimum_required ( VERSION 2.8 )
project ( CS585-project )

# Version number
set ( CS585-PROJECT_VERSION_MAJOR 0)
set ( CS585-PROJECT_VERSION_MINOR 1)

include_directories( $(PROJECT_SOURCE_DIR)/src )
add_executable ( CS585-project game.m.cpp )

# GTest
find_package( GTest REQUIRED )
include_directories( ${GTEST_INCLUDE_DIRS} )

set( test_sources ${PROJECT_SOURCE_DIR}/src/test/test0.cpp )
add_executable( CS585-project_test ${test_sources} )

target_link_libraries( CS585-project_test ${GTEST_BOTH_LIBRARIES} )