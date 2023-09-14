#include <gtest/gtest.h>
#include "pricingutil.h"

TEST(sampleTest, sample) {
    EXPECT_EQ(4, 4);
}

TEST(initTest, yay) {
    PricingUtil pricingUtil;
    float res = pricingUtil.calcVal(1.0, 0.1, 2.0);
    EXPECT_NEAR(res, 2.0, 1e-4);
}

