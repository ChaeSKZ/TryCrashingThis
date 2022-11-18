/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:48:30 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/07 13:48:32 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*check_blank(const char *nptr)
{
	int	i;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] == '\n'
		|| nptr[i] == '\f' || nptr[i] == '\r'
		|| nptr[i] == '\v' || nptr[i] == '\t')
		i++;
	return (nptr + i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	if (!nptr)
		return (0);
	nptr = check_blank(nptr);
	if (nptr[0] == '-' || nptr[0] == '+')
	{
		if (nptr[0] == '-')
			sign = -1;
		i = 1;
	}
	while (ft_isdigit(nptr[i]))
	{
		result += nptr[i] - 48;
		i++;
		if (ft_isdigit(nptr[i]))
			result *= 10;
	}
	return (result * sign);
}
