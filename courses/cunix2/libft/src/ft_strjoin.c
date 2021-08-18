#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    if (s1==NULL && s2==NULL)
    {
        return NULL;
    }
    
    if (s1==NULL)
    {
        return s2; 
    }

    if (s2==NULL)
    {
        return s1;
    }

    size_t len_s1 = strlen(s1), len_s2 = strlen(s2);
    char* tmp = (char *)malloc(len_s1+len_s2+1);

    for (int i=0;i<len_s1;i++)
    {
        tmp[i]=s1[i];
    }

    for (int i=len_s1;i<len_s1+len_s2;i++)
    {
        tmp[i]=s2[i-len_s1];
    }

    tmp[len_s1+len_s2]='\0';

    return tmp;
}