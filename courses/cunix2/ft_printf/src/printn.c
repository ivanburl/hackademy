#include "libftprintf.h"

void printn(char ch, int len)
{
    while (len--)
    {
        write(1, &ch, 1);
    }
}