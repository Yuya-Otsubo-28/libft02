#include <stdio.h>
#include <stdlib.h>

// static char test_func(unsigned int i, char c)
// {
// 	(void)i;
// 	return (c + 1);
// }

static char	*ft_strdup(const char *str)
{
	size_t	i;
	size_t	len;
	char	*res;

	len = 0;
	while (str[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (str[i])
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (* f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	if (!f)
		return (ft_strdup(s));
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f((unsigned int)i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char s[] = "012345678";
// 	char *res;

// 	res = ft_strmapi(s, &test_func);
// 	// res = ft_strmapi(NULL, &test_func);
// 	printf("  s: %s\n", s);
// 	printf("res: %s\n", res);
// 	free(res);
// 	return (0);
// }