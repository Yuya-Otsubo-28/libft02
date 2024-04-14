#include <ctype.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	char c = 'a';
// 	printf("ft_isprint: %d\n", ft_isprint(c));
// 	printf("isprint: %d\n", isprint(c));
// 	return (0);
// }