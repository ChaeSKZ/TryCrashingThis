/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:52:01 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/07 13:52:02 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		t_len;
	int		i;
	int		n;
	char	*new;

	t_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	new = malloc(sizeof(char) * t_len);
	if (!new)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n])
	{
		new[i + n] = s2[n];
		n++;
	}
	new[i + n] = '\0';
	return (new);
}
