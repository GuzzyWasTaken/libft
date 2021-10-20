#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(char a);
int		ft_isalpha(char a);
int		ft_isascii(int a);
int		ft_isdigit(char a);
int		isprint(int a);
int		isprint(int a);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_memset(void *dest, int val, size_t n);
char	strchr(const char *src, int c);
char	*ft_strdup(const char *s);
size_t	strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*strnstr(const char *big, const char *small, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		tolower(int ch);
int		toupper(int ch);

#endif
