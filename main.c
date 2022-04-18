#include <stdio.h>
#include <string.h>



void    *ft_memset(void *b, int c, size_t len)
{
	size_t  i = 0;

	while (i < len)
	{
		((char *)b)[i] = c;
		i++;
	}

	return (b);

}

int	main(void)
{
	char buffer[10];

	ft_memset(buffer, 'a', 5);
	
	for (int i = 0; i < 10; i++)
		printf("%c", buffer[i]);
	printf("\n");
	
	return(0);
}
