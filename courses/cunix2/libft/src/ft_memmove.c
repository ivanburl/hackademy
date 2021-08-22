#include "libft.h"

void *ft_memmove(void *destination, const void *source, size_t n)
{
    char *tmp_destination = (char *)destination;
    char *tmp_source = (char *)source;
    char *tmp = (char *)malloc(n + 1);

    for (size_t i = 0; i < n; i++)
    {
        tmp[i] = tmp_source[i];
    }
    tmp[n] = '\0';

    for (size_t i = 0; i < n; i++)
    {
        tmp_destination[i] = tmp[i];
    }

    free(tmp);
    return (void *)tmp_destination;
}