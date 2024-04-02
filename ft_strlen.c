#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	main(void)
{
	char *s = "Hello, World!";
	printf("ft_strlen: %zu\n", strlen(s));
	printf("strlen: %zu\n", strlen(s));
	return (0);
}