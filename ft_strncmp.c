#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	while (i < len && (s1[i] || s2[i]))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "Hello World!";
// 	char s2[] = "Hello world!";
// 	int	len = 7;

// 	printf("s1: %s\ns2: %s\n", s1, s2);
// 	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, len));
// 	printf("   strncmp: %d\n", strncmp(s1, s2, len));
// 	return (0);
// }