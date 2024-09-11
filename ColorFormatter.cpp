#include "ColorFormatter.h"
#include "ColorPair.h"
#include <map>

int ColorFormatter::TotalColorPair = 25;

std::string ColorFormatter::printcolorcodes()
{
	std::string colorcodes;
	std::map<int, std::string> colorpairs;

	if (TotalColorPair > 0 && TotalColorPair <=25)
	{
		for (auto pairNumber = 1; pairNumber <= TotalColorPair; pairNumber++)
		{
			auto color = TelCoColorCoder::ColorPair::GetColorFromPairNumber(pairNumber);
			colorpairs[pairNumber] = color.ToString();
		}
		for (auto itr : colorpairs)
		{
			colorcodes.append(std::to_string(itr.first));
			colorcodes.append("--");
			colorcodes.append(itr.second);
			colorcodes.append("\n");
		}
    }
 
 return colorcodes;
}
