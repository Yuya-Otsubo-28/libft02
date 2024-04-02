#include <ctype.h>

int ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	main(void)
{
	char c = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}