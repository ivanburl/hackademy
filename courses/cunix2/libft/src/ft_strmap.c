#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    size_t len_s = ft_strlen(s);
    char *tmp = (char *) malloc(len_s+1);
    for (size_t i = 0;i< len_s; i++)
    {
        tmp[i]=f(s[i]);
    }
    tmp[len_s]='\0';
    return tmp;
}