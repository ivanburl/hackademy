#include "libft.h"

int ft_tolower(char ch)
{
    if ((int)'A' <= ch && ch <= (int)'Z')
    {
        return ch - (int)'A' + (int)'a';
    }
    return ch;
}