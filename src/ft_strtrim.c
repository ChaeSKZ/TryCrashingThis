/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:52:36 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/07 13:52:37 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*new;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = 0;
	while (s1[len])
		len++;
	while (ft_strchr(set, s1[len]) && len >= 0)
		len--;
	new = ft_substr((char *)s1, 0, len + 1);
	return (new);
}
