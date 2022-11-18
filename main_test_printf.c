/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:54:06 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/18 15:25:41 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	ret = INT_MIN;
	unsigned	int tup = UINT_MAX;
	char	*str = strdup("Salut ca va?");
	char	*sp = strdup("%s");
	void *p = &str;

	ret = printf("%s%xttt%p%s", "", -456, &sp, "");
	printf("returned value = %i\n\n", ret);
	ret = INT_MIN;
	ret = ft_printf("%s%xttt%p%s", "", -456, &sp, "");
	printf("returned value = %i\n", ret);
	free(str);
	return (0);
}
