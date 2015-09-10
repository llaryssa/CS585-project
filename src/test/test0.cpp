// test0.cpp
#include <gtest/gtest.h>
 
inline
bool isEven( int n )
{
    return ( n % 2 == 0 );
}

inline
int squared ( int n )
{
    return n * n;
}

TEST( EqualTest, Trivial ) 
{
    ASSERT_EQ( 1, 1 );
    ASSERT_EQ( false, false );
}

TEST( EvenTest, PositiveInputs ) 
{
    EXPECT_TRUE( isEven( 6 ) );
    EXPECT_FALSE( isEven( 33 ) );
    EXPECT_FALSE( isEven( 9 ) );
    EXPECT_TRUE( isEven( 2 ) );
}

TEST( SquareTest, Eq ) 
{
    ASSERT_EQ( squared( 1 ), squared ( 1 ) );
    EXPECT_LT( 5, squared( 5 ) );
}
