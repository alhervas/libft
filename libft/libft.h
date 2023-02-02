#ifndef LIBFT_H
# define LIBFT_H
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void ft_bzero(void *b, size_t len);
int	ft_isalnum(int a);
int	ft_isalpha(int a);
int	ft_isascii(int a);
int	ft_isdigit(int a);
int	ft_isprint(int a);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);
void *ft_memset(void *b, int c, size_t len);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size);
unsigned int	ft_strlcat(char *dest, const char *src, size_t size);
int	ft_strlen(char *str);
int	ft_tolower(int a);
int	ft_toupper(int a);


#endif