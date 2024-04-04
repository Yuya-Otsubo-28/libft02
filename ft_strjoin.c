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

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	total_size;
	char	*res;

	if (!s1)
		return ((char *)s2);
	if (!s2)
		return ((char *)s1);
	total_size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (total_size + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i])
		res[i] = s1[i];
	j = 0;
	while (s2[j])
		res [i++] = s2[j++];
	res[i] = 0;
	return (res);
}

int	main(void)
{
	char s1[] = "";
	char s2[] = "";

	printf("s1: %s\ns2: %s\n\n", s1, s2);
	printf("ft_strjoin: %s\n", ft_strjoin(s1, s2));
	return (0);
}