#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t count)
{
    if (dest == source)
    {
        exit(-1); //should throw exception
    }

    char *tmp_dest = (char *)dest;
    char *tmp_source = (char *)source;

    for (size_t i = 0; i < count; i++)
    {
        tmp_dest[i] = tmp_source[i];
    }

    return (void *)tmp_dest;
}