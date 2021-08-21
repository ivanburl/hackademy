#include "libftprintf.h"

char *ft_itoa(int val)
{
    unsigned int nmb = val < 0 ? -val : val;
    char buff[32];
    int i = 0;

    do
    {
        buff[i++] = nmb % 10 + '0';
        nmb /= 10;
    } while (nmb != 0);

    char *res = malloc(i + 1);

    for (int j = i - 1; j >= 0; j--)
    {
        res[i - j - 1] = buff[j];
    }

    res[i] = '\0';

    return res;
}