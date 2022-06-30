#ifndef COLORCODER_TESTFUNCTIONS_H
#define COLORCODER_TESTFUNCTIONS_H

#include "ColorCoding_Implementation.hpp"
void testNumberToPair(int pairNumber, TelCoColorCoder::MajorColor expectedMajor, TelCoColorCoder::MinorColor expectedMinor);
void testPairToNumber( TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor, int expectedPairNumber);

#endif
