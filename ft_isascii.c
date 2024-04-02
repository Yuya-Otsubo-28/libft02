#include <ctype.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	main(void)
{
	char c = 'a';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(c));
	return (0);
}