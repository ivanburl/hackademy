#include "libft.h"

char* ft_strsub(char const *s, unsigned int start, size_t len)
{
    if (s==NULL)
    {
        return NULL;
    }

    size_t len_s = ft_strlen(s);

    start =  len_s>start ? start : len_s;
    size_t sz = len > len_s-start ? len_s-start : len;

    char *tmp = (char *) malloc(sz+1);

    for (size_t i = start; i < start + sz; i++)
    {
        tmp[i-start]=s[i];
    }

    tmp[sz]='\0';
    
    return tmp;
}