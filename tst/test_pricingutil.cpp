#include <gtest/gtest.h>
#include "pricingutil.h"

TEST(calcValTest, simpleCalculation) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(2.0, 0.2, 3.0);
    EXPECT_NEAR(pricingUtil.getVal(), 6.6, 1e-4);
}

TEST(calcValTest, negativeInterest) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(5.0, -0.1, 1.5);
    EXPECT_NEAR(pricingUtil.getVal(), 6, 1e-4);
}

TEST(calcValTest, zeroOleoConstant) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(3.0, 0.15, 0.0);
    EXPECT_NEAR(pricingUtil.getVal(), 0.0, 1e-4);
}

TEST(calcValTest, largeValues) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(10000.0, 0.05, 10.0);
    EXPECT_NEAR(pricingUtil.getVal(), 95000.0, 1e-4);
}

TEST(calcValTest, negativePrevPrice) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(-2.0, 0.1, 2.0);
    EXPECT_NEAR(pricingUtil.getVal(), -4.0, 1e-4);
}

TEST(calcValTest, zeroInterest) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(4.0, 0.0, 1.0);
    EXPECT_NEAR(pricingUtil.getVal(), 3.6, 1e-4);
}