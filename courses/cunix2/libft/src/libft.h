#include <stdlib.h>

void ft_bzero(void *s, size_t n); //clear first n symbols
int ft_isalpha(char ch);
int ft_isascii(int ch);
int ft_isdigit(char ch);
char *ft_strchr(char *str, char ch);                                  //find FIRST occurance of ch
char *ft_strdup(const char *str);                                     // copy string with ideal malloc
int ft_strncmp(const char *string1, const char *string2, size_t num); //compare first n elements
char *ft_strrchr(char *str, char ch);                                 //find LAST occurance of ch
int ft_tolower(char ch);
int ft_toupper(char ch);
int ft_strlen(char *s);
div_t ft_div(int numerator, int denominator); // return {a/b,a%b}
int ft_abs(int val);
char *ft_strstr(char *s1, char *s2);                                    // find s2 in s1
void *ft_memset(void *buf, char ch, size_t num);                        // set buf[0]..buf[num-1] to ch (in original optimised to O(n/32))
void *ft_memcpy(void *dest, const void *source, size_t count);          //copy from source to dest only count bytes dest!=source
void *ft_memccpy(void *dest, const void *source, char ch, int count); //the same as memcpy but only to ch charachter dest!=source