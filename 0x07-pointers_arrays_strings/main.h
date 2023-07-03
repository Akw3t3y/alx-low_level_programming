#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
int _putchar(char c);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
unsigned int _strspn(char *s, char *accept);
unsigned int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
#endif /* MAIN_H */
