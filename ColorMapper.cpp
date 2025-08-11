#include "ColorMapper.h"
#include <stdexcept>

namespace TelCoColorCoder
{
    ColorPair GetColorFromPairNumber(int pairNumber) {
        if(pairNumber < 1 || pairNumber > numberOfMajorColors * numberOfMinorColors) {
            throw std::out_of_range("Invalid pair number");
        }
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor major = static_cast<MajorColor>(zeroBasedPairNumber / numberOfMinorColors);
        MinorColor minor = static_cast<MinorColor>(zeroBasedPairNumber % numberOfMinorColors);
        return ColorPair(major, minor);
    }

    int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
        return major * numberOfMinorColors + minor + 1;
    }
}