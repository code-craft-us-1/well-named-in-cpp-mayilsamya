#include "ColorPair.h"
using namespace TelCoColorCoder;

namespace TelCoColorCoder
{
    const char* MajorColorNames[] =
    {
        "White", "Red", "Black", "Yellow", "Violet"
    };
    int numberOfMajorColors =
        sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

    const char* MinorColorNames[] =
    {
        "Blue", "Orange", "Green", "Brown", "Slate"
    };

    int numberOfMinorColors =
        sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}


ColorPair::ColorPair(MajorColor major, MinorColor minor)
    :majorColor(major)
    , minorColor(minor)
{
}

std::string ColorPair::ToString()
{
    std::string colorPairStr = MajorColorNames[majorColor];
    colorPairStr += " ";
    colorPairStr += MinorColorNames[minorColor];
    return colorPairStr;
}

ColorPair ColorPair::GetColorFromPairNumber(int pairNumber) {
    int zeroBasedPairNumber = pairNumber - 1;
    MajorColor majorColor =
        (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    MinorColor minorColor =
        (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return ColorPair(majorColor, minorColor);
}

int ColorPair::GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
    return major * numberOfMinorColors + minor + 1;
}
