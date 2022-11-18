/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:51:00 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/07 13:51:02 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	*str2;

	str = (char *)dest;
	str2 = (char *)src;
	i = 0;
	while (i < n && *(char *)src != c)
	{
		str[i] = str2[i];
		if (str2[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
