#include <stdio.h>
#include <stdlib.h>

static void	free_all(char **strs, size_t size)
{
	if (!strs)
		return ;
	while (size)
		free(strs[size--]);
	free(strs);
}

static char *ft_strndup(const char *s, size_t n)
{
	char 	*res;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len])
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && i < n)
	{
		res[i] = s[i];
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;
	int		n;
	size_t	i;

	size = count_strs(s, c);
	res = (char **)malloc(sizeof(char *) * (size + 1));
}