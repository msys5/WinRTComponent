#pragma once

#include "Calculator.g.h"

namespace winrt::Component::implementation
{
    struct Calculator : CalculatorT<Calculator>
    {
        Calculator();
        int32_t Add(int32_t a, int32_t b);
    };
}

namespace winrt::Component::factory_implementation
{
    struct Calculator : CalculatorT<Calculator, implementation::Calculator>
    {
    };
}
