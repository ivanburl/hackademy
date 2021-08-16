#include "libft.h"

div_t div(int numerator, int denominator)
{
    div_t res = {numerator / denominator, numerator % denominator};
    return res;
}