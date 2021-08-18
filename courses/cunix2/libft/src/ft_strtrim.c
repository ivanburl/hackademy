#include "libft.h"

char* ft_strtrim(char const *s)
{
    if (s==NULL)
    {
        return NULL;
    }
    size_t real_sz=0, no_need_sz=0;

    while(*s!='\0')
    {
        if (ft_isspace(*s)) no_need_sz++;
        s++;
        real_sz++;
    }

    char *tmp = malloc(real_sz-no_need_sz+1);

    for (int i=0;i<real_sz;i++)
    {
        if (ft_isspace(s[i])==0) 
        {
            *tmp = s[i];
            tmp++;
        }
    }

    *tmp='\0';
    return tmp;
}