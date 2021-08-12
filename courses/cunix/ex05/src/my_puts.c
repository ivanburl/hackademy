#include "test.h"
#include <unistd.h>
#include <string.h>

int my_puts(const char *s) {
    write(1,s,strlen(s));
    write(1,"\n",1);
    return 0;
}
