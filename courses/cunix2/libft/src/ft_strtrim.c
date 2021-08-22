#include "libft.h"

char *ft_strtrim(char const *s)
{
    if (s == NULL)
    {
        return NULL;
    }
    size_t real_sz = ft_strlen(s), left = 0, right = real_sz;

    for (size_t i = 0; i < real_sz; i++)
    {
        if (ft_isspace(s[i]) == 1)
        {
            left++;
        }
        else
        {
            break;
        }
    }

    for (size_t i = real_sz; i > left; i--)
    {
        if (ft_isspace(s[i - 1]) == 1)
        {
            right--;
        }
        else
        {
            break;
        }
    }
    char *tmp = malloc(right - left + 1);

    for (size_t i = left; i < right; i++)
    {
        tmp[i - left] = s[i];
    }
    tmp[right - left] = '\0';

    return tmp;
}