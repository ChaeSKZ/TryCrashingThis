/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:52:27 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:05 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (!little || ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i])
	{
		n = 0;
		while (big[i + n] == little[n] && little[n] && n + i < len)
			n++;
		if (!little[n])
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
