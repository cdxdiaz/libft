#include <stdio.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);

int	main(void)
{
	char c = 'a';
	
	printf("return's %d", ft_isalnum(c));
}
