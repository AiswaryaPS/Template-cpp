#include "tcomplex.h"
#include "gtest/gtest.h"
namespace {
TEST(Complex,Empty_constructor)
{
    Complex <int> p;
    EXPECT_EQ(0,p.real());
    EXPECT_EQ(0,p.imag());
}

TEST(Complex,Parameterised_Constructor)
{
    Complex <int> p(4,6);
    EXPECT_EQ(4,p.real());
    EXPECT_EQ(6,p.imag());
}
}
