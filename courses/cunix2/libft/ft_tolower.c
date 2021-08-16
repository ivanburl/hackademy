#include "libft.h"

int ft_tolower(int ch)
{
    if ((int)'A' <= ch && ch <= (int)'Z')
    {
        return ch - (int)'A' + (int)'a';
    }
    return ch;
}