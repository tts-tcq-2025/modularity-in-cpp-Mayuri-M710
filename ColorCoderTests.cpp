#include <gtest/gtest.h>
#include "ColorMapper.h"
#include "ReferenceManual.h"

namespace TelCoColorCoder 
{
    TEST(ColorCoderTest, TestColorMapper) 
    {
        ColorPair colorPair = GetColorFromPairNumber(4);
        EXPECT_EQ(colorPair.getMajor(), WHITE);
        EXPECT_EQ(colorPair.getMinor(), BROWN);
        
        EXPECT_EQ(GetPairNumberFromColor(BLACK, ORANGE), 12);
    }

    TEST(ColorCoderTest, TestReferenceManual) 
    {
        std::string manual = GenerateReferenceManual();
        EXPECT_TRUE(manual.find("| Pair | Major Color | Minor Color |") != std::string::npos);
        EXPECT_TRUE(manual.find("White") != std::string::npos);
        EXPECT_TRUE(manual.find("Violet") != std::string::npos);
    }
}