#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	char *res;

	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			res = (char *)&s[i];
		i++;
	}
	return (res);
}

int	main(void)
{
	char str[] = "12345674890";
	char c = 'a';

	printf("str: %s\n  c: %c\n\n", str, c);
	printf("ft_strrchr: %s\n", ft_strrchr(str, c));
	printf("   strrchr: %s\n", strrchr(str, c));
	return (0);
}