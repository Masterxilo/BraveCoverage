#include "gmock/gmock.h"
#include "brave_coverage.hpp"

TEST(BraveCoverage, TestCaseOne) {
    Sum SumUnderTest;
    SumUnderTest.setAValue(10);
    SumUnderTest.setAValue(10); // double execute this line
    SumUnderTest.setBValue(10);

    EXPECT_EQ(20, SumUnderTest.executeSum());
}