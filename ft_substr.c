#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	if (!s || !len || start >= ft_strlen(s))
		return (NULL);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	char s[] = "";
// 	unsigned int	start =  2;
// 	size_t	len = 1;
// 	char	*res;

// 	res = ft_substr(s, start, len);
// 	printf("s: %s\nstart: %d\nlen: %ld\n\n", s, start, len);
// 	printf("ft_substr: %s\n", res);
// 	free(res);
// 	return (0);
// }