#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		lst = &new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	char s1[] = "this is 1";
// 	char s2[] = "this is 2";
// 	char s3[] = "this is 3";
// 	t_list	*head;

// 	head = ft_lstnew(s1);
// 	ft_lstadd_front(&head, ft_lstnew(s2));
// 	ft_lstadd_front(&head, ft_lstnew(s3));
// 	while (head)
// 	{
// 		printf("%s\n", (char *)head->content);
// 		head = head->next;
// 	}
// 	return (0);
// }