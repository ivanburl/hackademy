#include "libft.h"

char **ft_strsplit(const char *s, char delim)
{

    size_t len_s = ft_strlen(s), sz_blocks = 0;
    for (size_t i = 1; i < len_s; i++)
    {
        if (s[i] != delim && s[i - 1] == delim)
        {
            sz_blocks++;
        }
    }

    if (len_s && s[0] != delim)
    {
        sz_blocks++;
    }

    char **tmp = malloc((sz_blocks + 1) * sizeof(char *));
    size_t last = 0, cur = 0;

    for (size_t i = 0; i < len_s; i++)
    {
        if (s[i] == delim)
        {
            if (i == last)
            {
                last++;
                continue;
            }
            tmp[cur] = malloc(i - last + 1);
            for (size_t j = last; j < i; j++)
            {
                tmp[cur][j - last] = s[j];
            }
            tmp[cur][i - last] = '\0';
            last = i + 1;
            cur++;
        }
    }

    if (last != len_s)
    {
        tmp[cur] = malloc(len_s - last + 1);
        for (size_t j = last; j < len_s; j++)
        {
            tmp[cur][j - last] = s[j];
        }
        tmp[cur][len_s - last] = '\0';
        cur++;
    }

    tmp[cur] = NULL;
    return tmp;
}