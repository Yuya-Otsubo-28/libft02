#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 'a' - 'A';
	return (c);
}

int	main(void)
{
	char c = 'a';

	printf("ft_toupper: %c\n", ft_toupper(c));
	printf("   toupper: %c\n", toupper(c));
	return (0);
}