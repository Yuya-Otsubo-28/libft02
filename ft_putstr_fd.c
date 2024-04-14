#include <stdio.h>
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
		write(fd, &s[i++], sizeof(char));
}

// int	main(void)
// {
// 	char s[] = "Hello World!\n";
	
// 	ft_putstr_fd(s, 1);
// 	return (0);
// }