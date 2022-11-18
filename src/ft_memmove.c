/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:51:18 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/07 13:51:19 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*sdest;
	char	*ssrc;

	i = 0;
	sdest = (char *)dest;
	ssrc = (char *)src;
	if (!src && !dest)
		return (NULL);
	if (ssrc < sdest)
		while (++i <= n)
			sdest[n - i] = ssrc[n - i];
	else
		while (n-- > 0)
			*(sdest++) = *(ssrc++);
	return (dest);
}
