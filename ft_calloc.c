#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *res;
	size_t	i;

	res = (unsigned char *)malloc(nmemb * size);
	if (!res)
		return (NULL);
	i = 0;
	while (i < size * nmemb)
	{
		res[i] = 0;
		i++;
	}
	return ((void *)res);
}

// int	main(void)
// {
// 	size_t	nmemb = sizeof(int);
// 	size_t	size = 4;
// 	int	*res;

// 	res = (int *)ft_calloc(nmemb, size);
// 	for (size_t i = 0; i < size; i++)
// 		printf("res[%ld]: %d\n", i, res[i]);
// 	free(res);
// 	return (0);
// }