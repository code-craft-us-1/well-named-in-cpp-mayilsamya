#include "ColorPairTest.h"
#include "ColorFormatter.h"

int main() 
{
    std::cout << "RUNNIG TESTS for ColorPair Class\n\n";
    testNumberToPair(4, TelCoColorCoder::WHITE, TelCoColorCoder::BROWN);
    testNumberToPair(5, TelCoColorCoder::WHITE, TelCoColorCoder::SLATE);

    testPairToNumber(TelCoColorCoder::BLACK, TelCoColorCoder::ORANGE, 12);
    testPairToNumber(TelCoColorCoder::VIOLET, TelCoColorCoder::SLATE, 25);

    std::cout << "RUNNIG TESTS for ColorFormatter Class\n\n";
    testColorCodeFormatterWithValidTotalcolor();
    testColorCodeFormatterWithInValidTotalcolor();

    return 0;
}
