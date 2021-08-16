#include "libft.h"

int ft_toupper(char ch)
{
    if ((int)'a' <= ch && ch <= (int)'z')
    {
        return ch - (int)'a' + (int)'A';
    }
    return ch;
}