#include "libft.h"

int ft_isalpha(char ch)
{
    return ((int)'a' <= ch && ch <= (int)'z') || ((int)'A' <= ch && ch <= (int)'Z');
}