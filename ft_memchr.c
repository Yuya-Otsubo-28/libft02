#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*bp;
	size_t	i;

	bp = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		if (bp[i] == c)
			return (&bp[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "12345678901234567890";
// 	char c = 'b';
// 	int	len = 100;

// 	printf("  s: %s\n  c: %c\nlen: %d\n", s, c, len);
// 	printf("ft_memchr: %s\n", (char *)ft_memchr(s, c, len));
// 	printf("   memchr: %s\n", (char *)memchr(s, c, len));
// }