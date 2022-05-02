#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t  ft_strlen(const char *s)
{
	size_t  i;
	
	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	
	i = 0;
	while (src[i] != 0  && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	len_dest;

	i = 0;
	len_dest = ft_strlen(dest);
	while (src[i] != 0 && len_dest + i < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[ft_strlen(dest) +i] = 0;
	if (size > len_dest)
		return (ft_strlen(src) + len_dest);
	return (ft_strlen(src) + size);
}

int main()
{
	char	dest[50];
	char	*src;
	int	size;

	src = "hello the world";
	size = 5;
	printf("ft_strlcpy %u\n", ft_strlcpy(dest, src, size));
	printf("%s\n", dest);
	printf("strlcpy %lu\n", strlcpy(dest, src, size));
	printf("%s\n\n", dest);
	printf("ft_strlcat %zu\n", ft_strlcat(dest, src, size));
	printf("%s\n", dest);
	printf("strlcat %lu\n", strlcat(dest, src, size));
	printf("%s\n", dest);

	return 0;
}
