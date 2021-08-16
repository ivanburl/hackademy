#include "libft.h"

int ft_isascii(int ch)
{
    return (0 <= ch && ch < 128);
}