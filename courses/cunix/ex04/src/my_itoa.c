#include "test.h"
#include <stdlib.h>

char *my_itoa(int nmb) 
{
    char buff[32];
    int i = 0, ok = 0;

    if (nmb < 0) 
    {
        nmb *= -1;
        ok = 1;
    }

    do 
    {
        buff[i++] = nmb % 10 + '0';
        nmb /= 10;
    } 
    while (nmb != 0);

    char *res = malloc(i + ok + 1);

    if (ok) 
    {
        res[0] = '-';
    }

    for (int j = i - 1; j >= 0 ; j--) 
    {
        res[i - j - 1 + ok] = buff[j];
    }

    res[i + ok] = '\0';

    return res;
}