#include "ReferenceManual.h"
#include "ColorMapper.h"
#include <iomanip>
#include <sstream>

namespace TelCoColorCoder
{
    std::string GenerateReferenceManual() {
        std::ostringstream manual;
        manual << "| Pair | Major Color | Minor Color |\n";
        manual << "|------|-------------|-------------|\n";
        
        for(int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair cp = GetColorFromPairNumber(i);
            manual << "| " << std::setw(2) << std::right << i << "   | "
                   << std::setw(11) << std::left << cp.getMajorColorName() << " | "
                   << std::setw(11) << std::left << cp.getMinorColorName() << " |\n";
        }
        return manual.str();
    }
}