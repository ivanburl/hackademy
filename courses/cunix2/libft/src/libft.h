#include <stdlib.h>

void ft_bzero(void *s, size_t n);                                        //clear first n symbols
int ft_isalpha(char ch);                                                 // only for 'a'..'z' and 'A'..'Z'
int ft_isascii(int ch);                                                  //obv
int ft_isdigit(char ch);                                                 //obv
char *ft_strchr(char *str, char ch);                                     //find FIRST occurance of ch
char *ft_strdup(const char *str);                                        //copy string with ideal malloc
int ft_strncmp(const char *string1, const char *string2, size_t num);    //compare first n elements
char *ft_strrchr(char *str, char ch);                                    //find LAST occurance of ch
int ft_tolower(char ch);                                                 //only 'A'..'Z'
int ft_toupper(char ch);                                                 //only 'a'..'z'
size_t ft_strlen(const char *s);                                         //length og string
div_t ft_div(int numerator, int denominator);                            //return {a/b,a%b}
int ft_abs(int val);                                                     //absolute value
char *ft_strstr(char *s1, char *s2);                                     //find s2 in s1
char *ft_strnstr(char *s1, char *s2, size_t n);                          //find s2 in s1 only with n occurances
void *ft_memset(void *buf, char ch, size_t num);                         //set buf[0]..buf[num-1] to ch (in original optimised to O(n/32))
void *ft_memcpy(void *dest, const void *source, size_t count);           //copy from source to dest only count bytes dest!=source
void *ft_memccpy(void *dest, const void *source, char ch, size_t count); //the same as memcpy but only to ch charachter dest!=source
void *ft_memmove(void *destination, const void *source, size_t n);       //move n bytes from source to the destination
void *ft_memchr(const void *arr, char ch, size_t n);                     // find ch in arr
int ft_memcmp(const void *buf1, const void *buf2, size_t count);         //simple cmp for strings
void ft_striter(char *s, void (*f)(char *));
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strsub(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s);
int ft_isspace(char ch);
char **ft_strsplit(char const *s, char c);