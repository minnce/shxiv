#include "pricingutil.h"

PricingUtil::PricingUtil() {}

float PricingUtil::calcVal(float prevPrice, float interest, float oleoConstant) {
    float res = (prevPrice * (0.9 + interest)) * oleoConstant;
    this->val = res;
    return res;
}

float PricingUtil::getVal() {
    return this->val;
}