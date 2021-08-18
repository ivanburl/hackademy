#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
    char *tmp = malloc(sizeof(s));
    while(*s!='\0')
    {
        *tmp = f(*s);
        tmp++;
        s++;
    }
    *tmp='\0';
    return tmp;
}