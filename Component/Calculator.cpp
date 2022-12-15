#include "pch.h"
#include "Calculator.h"
#if __has_include("Calculator.g.cpp")
#include "Calculator.g.cpp"
#endif

using namespace winrt;

namespace winrt::Component::implementation
{
    Calculator::Calculator()
    {
        
    }

    int32_t Calculator::Add(int32_t a, int32_t b)
    {
        return a + b;
    }
}
