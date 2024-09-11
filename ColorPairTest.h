#pragma once
#include <iostream>
#include <assert.h>
#include "ColorPair.h"
#include "ColorFormatter.h"

void testNumberToPair(int pairNumber,
    TelCoColorCoder::MajorColor expectedMajor,
    TelCoColorCoder::MinorColor expectedMinor)
{
    TelCoColorCoder::ColorPair colorPair =
        TelCoColorCoder::ColorPair::GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void testPairToNumber(
    TelCoColorCoder::MajorColor major,
    TelCoColorCoder::MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = TelCoColorCoder::ColorPair::GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}

void testColorCodeFormatterWithValidTotalcolor()
{
    std::string colorpairStr = ColorFormatter::printcolorcodes();
    std::cout << "\n\n";
    std::cout << "Color Code formatter value " << colorpairStr << std::endl;
    assert(!colorpairStr.empty());
}

void testColorCodeFormatterWithInValidTotalcolor()
{
    ColorFormatter::TotalColorPair = 26;
    auto colorpairStr = ColorFormatter::printcolorcodes();
    if (colorpairStr.empty())
        std::cout << "Color Code formatter value is EMPTY due to invalid input"  << ColorFormatter::TotalColorPair <<std::endl;
    assert(colorpairStr.empty());

    ColorFormatter::TotalColorPair =0;
    colorpairStr = ColorFormatter::printcolorcodes();
    if (colorpairStr.empty())
        std::cout << "Color Code formatter value is EMPTY due to invalid input" << ColorFormatter::TotalColorPair << std::endl;
    assert(colorpairStr.empty());
}