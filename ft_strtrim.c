#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

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

static char *ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

static size_t	get_trimmed_len(char const *s1, char const *set)
{
	size_t	head;
	size_t	tail;

	head = 0;
	while (ft_strchr(set, s1[head]))
		head++;
	tail = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[tail]))
		tail--;
	tail++;
	if (tail < head)
		return (0);
	return (tail - head);
}

static char *make_res(char const *s1, char const *set, char *res, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	j = 0;
	while (len--)
		res[j++] = s1[i++];
	res[j] = '\0';
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*res;

	if (!set)
		return (ft_strdup(s1));
	if (!s1)
		return (NULL);
	if (!s1[0])
		return (ft_strdup(""));
	len = get_trimmed_len(s1, set);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res = make_res(s1, set, res, len);
	return (res);
}

// int	main(void)
// {
// 	char s1[] = "3456789012345";
// 	char set[] = "12";
// 	char *res;

// 	printf(" s1: %s\n", s1);
// 	printf("set: %s\n\n", set);
// 	res = ft_strtrim(s1, set);
// 	printf("res: %s\n", res);
// 	free(res);
// }