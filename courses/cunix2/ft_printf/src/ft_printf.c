#include "libftprintf.h"

void ft_printf(char *format, ...)
{
    char *traverse;
    //int i;

    va_list arg;
    va_start(arg, format);
    for (traverse = format; *traverse != '\0'; traverse++)
    {
        while (*traverse != '%')
        {
            char ch = *traverse;
            write(1, &ch, 1);
            traverse++;
        }

        if (*traverse == '\0')
        {
            break;
        }

        traverse++;

        //temporal values
        char *s;
        char ch;
        int tmp;
        //end of temporal values

        //flag values
        int count_zeroes = 0, count_spaces_right = 0, count_spaces_left = 0;
        int plus = 0, minus = 0, len = 0, space = 0;
        //end of flag values

        //zero flag (+ and 1 space)
        switch (*traverse)
        {
        case '+':
            plus = 1;
            traverse++;
            break;
        case ' ':
            space = 1;
            traverse++;
            break;
        }

        //first flag (spaces and 0)
        switch (*traverse)
        {
        case '-':
            traverse++;
            count_spaces_right = calculate(&traverse);
            break;
        case '0':
            traverse++;
            count_zeroes = calculate(&traverse);
            break;
        }

        count_spaces_left = calculate(&traverse);
        //printf("%d",count_spaces_left);
        //second flag (letters)
        switch (*traverse)
        {
        case 's':
            s = va_arg(arg, char *);
            if (s == NULL)
            {
                minus = plus = 0;
                s = "(null)";
            }
            len = ft_strlen(s);
            break;
        case 'd':
            tmp = va_arg(arg, int);
            minus = tmp >= 0 ? 0 : 1;
            s = ft_itoa(tmp);
            len = ft_strlen(s);
            break;
        case 'c':
            ch = va_arg(arg, int);
            s = &ch;
            len = 1;
            break;
        case 'i':
            tmp = va_arg(arg, int);
            minus = tmp >= 0 ? 0 : 1;
            s = ft_itoa(tmp);
            len = ft_strlen(s);
            break;
        case '%':
            ch = '%';
            minus = plus = space = 0;
            count_spaces_right = count_spaces_left = 0;
            count_zeroes = 0;
            s = &ch;
            len = 1;
            break;
        }

        len += (minus || plus || space);
        count_zeroes = count_zeroes > len ? count_zeroes - len : 0;
        count_spaces_right = count_spaces_right > len ? count_spaces_right - len : 0;
        count_spaces_left = count_spaces_left > len ? count_spaces_left - len : 0;

        if (count_zeroes == 0 && count_spaces_left != 0)
        {
            printn(' ', count_spaces_left);
            count_spaces_left = 0;
        }

        if (minus)
        {
            printn('-', 1);
            len++;
        }
        else
        {
            if (plus)
            {
                printn('+', 1);
                len++;
            }
        }

        if (minus == 0 && plus == 0 && space == 1)
        {
            printn(' ', 1);
        }

        printn('0', count_zeroes);
        count_zeroes = 0;

        printn(' ', count_spaces_left);
        count_spaces_left = 0;

        write(1, s, ft_strlen(s));

        printn(' ', count_spaces_right);
        count_spaces_right = 0;
    }
    va_end(arg);
}