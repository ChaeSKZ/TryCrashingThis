/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:58:01 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/09 17:33:29 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	new = malloc(sizeof(t_list));
	if (!new || !lst || !(*f) || !del)
		return (NULL);
	tmp = new;
	while (lst)
	{
		tmp->content = (*f)(lst->content);
		if (lst->next)
		{
			tmp->next = malloc(sizeof(t_list));
			if (tmp->next == NULL)
			{
				ft_lstclear(&new, (*del));
				return (NULL);
			}
		}
		lst = lst->next;
		if (lst)
			tmp = tmp->next;
	}
	tmp->next = NULL;
	return (new);
}
