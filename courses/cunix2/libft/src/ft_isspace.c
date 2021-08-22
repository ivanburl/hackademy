#include "libft.h"

int ft_isspace(char ch)
{
    char s[6] = {' ', '\t', '\n', '\v', '\f', '\r'};
    for (int i = 0; i < 6; i++)
    {
        if (ch == s[i])
        {
            return 1;
        }
    }
    return 0;
}