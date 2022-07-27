/*
 * Counter_Tests.cpp
 *
 *  Created on: 27 Jul 2022
 *      Author: Kathryn.Whitehead
 */

#include "gtest/gtest.h"

extern "C"
{
#include "Counter.c"                // Note including *.c file is deliberate!
}

int main(int argc, char **argv)

{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(Increment, Counter)
{
    EXPECT_EQ(0, Increment());
    EXPECT_EQ(1, Increment());
    EXPECT_EQ(2, Increment());
}
