#include "libft.h"

int ft_isascii(char ch)
{
    return (0 <= ch && ch < 128);
}