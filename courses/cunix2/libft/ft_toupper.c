#include "libft.h"

int ft_toupper(int ch)
{
    if ((int)'a' <= ch && ch <= (int)'z')
    {
        return ch - (int)'a' + (int)'A';
    }
    return ch;
}