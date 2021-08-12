#include "test.h"

unsigned int  my_strlen(char *str) {
    int len = 0;
    while(*str++!='\0') len++;
    return len;
}