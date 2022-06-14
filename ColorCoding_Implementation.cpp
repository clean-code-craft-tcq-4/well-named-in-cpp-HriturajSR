#include <string>
#include <iostream>
#include "ColorCoding_Implementation.hpp"

TelCoColorCoder::ColorPair TelCoColorCoder::GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    TelCoColorCoder::MajorColor majorColor = 
        (TelCoColorCoder::MajorColor)(zeroBasedPairNumber / TelCoColorCoder::numberOfMinorColors);
    TelCoColorCoder::MinorColor minorColor =
        (TelCoColorCoder::MinorColor)(zeroBasedPairNumber % TelCoColorCoder::numberOfMinorColors);
    return TelCoColorCoder::ColorPair(majorColor, minorColor);
}

int TelCoColorCoder::GetPairNumberFromColor(TelCoColorCoder::MajorColor major, TelCoColorCoder::MinorColor minor) {
    return major * TelCoColorCoder::numberOfMinorColors + minor + 1;
}

void TelCoColorCoder::PrintReferenceManual() 
    {
        int majorColorIterator, minorColorIterator;
        int pairNumber = 1;

        std::cout << "25 PAIR COLOR CODE REFERNCE MANUAL" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        std::cout << "| PAIR NO. | MAJOR COLOR | MINOR COLOR |" << std::endl;
        std::cout << "----------------------------------------" << std::endl;
        for (majorColorIterator = 0; majorColorIterator < numberOfMajorColors; majorColorIterator++)
        {
            for (minorColorIterator = 0; minorColorIterator < numberOfMinorColors; minorColorIterator++)
            {
                std::cout << "|   " << pairNumber++ << " \t  -->  " << MajorColorNames[majorColorIterator] << "\t -->  " << MinorColorNames[minorColorIterator] << "\t |" << std::endl;
            }
            std::cout << "----------------------------------------" << std::endl;
        }
    }
}
