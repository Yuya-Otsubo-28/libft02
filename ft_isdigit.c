#include <ctype.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	main(void)
{
	char c = 'a';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(c));
	return (0);
}