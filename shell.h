#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

size_t string_len(const char *s);
char *string_cat(char *dest, char *src);
int string_cmp(char *s1, char *s2);
char *string_cpy(char *dest, char *src);
char *string_dup(char *str);
int abs_(int n);
long atoi_(const char *s);
char *itoa_(int value, char *buffer, int base);
size_t str_cspn(const char *str1, const char *str2);

#endif /* SHELL_H */
