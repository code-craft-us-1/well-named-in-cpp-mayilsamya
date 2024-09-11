#pragma once
#include <string>


namespace TelCoColorCoder
{
    class ColorPair;
    
    enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
    enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };
}


class TelCoColorCoder::ColorPair {
private:
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor);
    static ColorPair GetColorFromPairNumber(int pairNumber);
    static int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    inline MajorColor getMajor()
    {
        return majorColor;
    }
    inline MinorColor getMinor()
    {
        return minorColor;
    }
    std::string ToString();
};
