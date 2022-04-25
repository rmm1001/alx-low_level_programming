#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char *src, usigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *, char *accept);
char *strpbrk(car *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_daigsums(int *A, int size);
void set_string(char **s, char *to);

#endif
