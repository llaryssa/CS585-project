// test0.cpp
#include <gtest/gtest.h>
 
TEST( SampleTest, AssertionTrue ) {
    ASSERT_EQ( 1, 1 );
}

TEST( SampleTest2, AssertionTrue ) {
	EXPECT_GT( 7, 6 );
}

