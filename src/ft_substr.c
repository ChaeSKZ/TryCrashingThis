/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 15:28:41 by jgingast          #+#    #+#             */
/*   Updated: 2022/11/07 16:26:09 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char const *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (start < (unsigned int)ft_strlen(s) && s[start + i] && i < len)
		i++;
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*sub;
	size_t		start_copy;

	start_copy = ((size_t)start);
	if (s == 0)
		return (0);
	sub = malloc(get_size(s, start, len) * sizeof(char));
	if (sub == 0)
		return (0);
	i = 0;
	while (i < len && start_copy < (size_t)ft_strlen(s) && s[start_copy + i])
	{
		sub[i] = s[start_copy + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
