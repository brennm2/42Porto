// #include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*list;

// 	list = malloc(sizeof(t_list));
// 	if (!list)
// 		return (0);
// 	list->content = content;
// 	list->next = (void *)0;
// 	return (list);
// }

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// 	*lst = new;
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }
// char	**ft_split(char const *s, char c)
// {
// 	char	**tab;
// 	int		i;
// 	int		j;
// 	int		k;

// 	i = 0;
// 	j = 0;
// 	k = 0;
// 	tab = malloc(sizeof(char *) * (ft_strlen(s) + 1));
// 	if (!tab)
// 		return (0);
// 	while (s[i])
// 	{
// 		while (s[i] == c)
// 			i++;
// 		j = i;
// 		while (s[i] != c && s[i])
// 			i++;
// 		if (i > j)
// 		{
// 			tab[k] = malloc(sizeof(char) * (i - j + 1));
// 			if (!tab[k])
// 				return (0);
// 			ft_strlcpy(tab[k], &s[j], i - j + 1);
// 			k++;
// 		}
// 	}
// 	tab[k] = 0;
// 	return (tab);
// }
