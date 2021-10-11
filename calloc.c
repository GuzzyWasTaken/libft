#include <stddef.h>
#include <stdlib.h>

void    ft_bzero(void *s, size_t n);
void    *ft_calloc(size_t nmemb, size_t size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		{
			nmemb = 1;
			size = 1;
		}
	p = malloc(nmemb * size);
	ft_bzero(p, nmemb * size);
	return (p);
}
