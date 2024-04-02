#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}

int	main(void)
{
	char c = 'A';

	printf("ft_tolower: %c\n", ft_tolower(c));
	printf("   tolower: %c\n", tolower(c));
	return (0);
}