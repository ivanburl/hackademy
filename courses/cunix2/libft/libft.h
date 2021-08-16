#include <stdlib.h>

void ft_bzero(void *s, size_t n); //clear first n symbols
int ft_isalpha(int ch);
int ft_isascii(int ch);
int ft_isdigit(int ch);
char *ft_strchr(char *str, int ch);                                   //find FIRST occurance of ch
char *ft_strdup(const char *str);                                           // copy string with ideal malloc
int ft_strncmp(const char *string1, const char *string2, size_t num); //compare first n elements
char *ft_strrchr(char *str, int ch);                                  //find LAST occurance of ch
int ft_tolower(int ch);
int ft_toupper(int ch);