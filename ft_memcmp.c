#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *b1, const void *b2, size_t len)
{
	unsigned char *b1p;
	unsigned char *b2p;
	size_t	i;

	if (!b1 || !b2)
		return (0);
	b1p = (unsigned char *)b1;
	b2p = (unsigned char *)b2;
	i = 0;
	while (i < len)
	{
		if (b1p[i] != b2p[i])
			return (b1p[i] - b2p[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "Hello World!";
// 	char s2[] = "Hello World!";
// 	int	len = 9;

// 	printf("s1: %s\ns2: %s\n", s1, s2);
// 	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, len));
// 	printf("   memcmp: %d\n", memcmp(s1, s2, len));
// 	return (0);
// }