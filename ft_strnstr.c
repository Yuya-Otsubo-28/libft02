#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big || !little)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			j++;
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char big[] = "1234567890Hello World!67890";
// 	char little[] = "Hello World!";
// 	int	len = 30;

// 	printf("   big: %s\nlittle: %s\n", big, little);
// 	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
// 	// printf("   strnstr: %s\n", strnstr(big, little, len));
// 	return (0);
// }