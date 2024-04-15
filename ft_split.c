#include <stdio.h>
#include <stdlib.h>

static char	**free_all(char **strs, size_t size)
{
	if (!strs)
		return (NULL);
	while (size)
		free(strs[--size]);
	free(strs);
	return (NULL);
}

static int	count_strs(const char *s, char c)
{
	size_t	i;
	int		flag;
	int	res;

	i = 0;
	flag = 1;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 1;
		else
		{
			if (flag)
				res++;
			flag = 0;
		}
		i++;
	}
	return (res);
}

static char *ft_strcdup(const char *s, char c)
{
	char 	*res;
	size_t	len;
	size_t	i;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
	{
		res[i] = s[i];
		i++;
	}
	printf("res: %s\n", res);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		size;
	int		n;
	size_t	i;

	size = count_strs(s, c);
	printf("size: %d\n", size);
	res = (char **)malloc(sizeof(char *) * (size + 1));
	while (s[i] && n < size)
	{
		while (s[i++] == c)
		{
			if (!s[i])
				break ;
		}
		res[n] = ft_strcdup(s, c);
		if (!res[n])
			return (free_all(res, n));
		n++;
	}
	res[n] = NULL;
	return (res);
}

int	main(void)
{
	char s[] = "x1234567890x1234567x1234567890";
	char c = 'x';
	char **res;
	int	i;

	printf("s: %s\n", s);
	printf("c: %c\n\n", c);
	res = ft_split(s, c);
	i = 0;
	while (res[i])
	{
		printf("res[%d]: %s\n", i, res[i]);
		i++;
	}
	free_all(res, i);
	return (0);
}