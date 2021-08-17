#include "libft.h"

void *ft_memccpy(void *dest, const void *source, char ch, size_t count)
{
    if (dest==source)
    {
        exit(-1);//error exception
    }

    char *tmp_dest = (char *)dest;
    char *tmp_source = (char *)source;

    while (count--)
    {
        *tmp_dest = *tmp_source;
        tmp_dest++;
        if (*tmp_source == ch)
        {
            return tmp_dest;
        }
        tmp_source++;
    }

    return NULL;
}