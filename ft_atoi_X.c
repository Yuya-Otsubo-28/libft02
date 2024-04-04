#include <stdlib.h>
#include <stdio.h>

// FreeBSD: It is equivalent to (int)strtol(nptr, NULL, 10);
// strtolがlong型だから結局long->intのキャストを挟む形の実装でOKそう

static int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'\
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long long res;
	int	flag;
	size_t	i;

	if (!nptr)
		return (0);
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	flag = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			flag *= -1;
		i++;
	}
	res = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res *= 10;
		res += nptr[i] - '0';
		i++;
	}
	return ((int)(res * flag));
}

int	main(void)
{
	char num[] = "   -123agv45";

	printf("num: %s\n", num);
	printf("ft_atoi: %d\n", ft_atoi(num));
	printf("   atoi: %d\n", atoi(num));
	return (0);
}
