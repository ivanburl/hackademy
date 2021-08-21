#include "libftprintf.h"

int ft_isdigit(char ch)
{
    return ((int)'0' <= ch && ch <= (int)'9');
}

int calculate(char **val)
{
    char *s = *val;
    int res = 0;
    while(isdigit(*s)){
        res=res*10+(*s-'0');
        s++;
    }
    *val = s;
    return res;
}