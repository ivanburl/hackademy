#include "libft.h"

int ft_strncmp(const char *string1, const char *string2, size_t num)
{
    for (int i = 0; i < num; i++)
    {
        if (string1[i] < string2[i])
        {
            return -1;
        }

        if (string1[i] > string2[i])
        {
            return 1;
        }
    }
    return 0;
}