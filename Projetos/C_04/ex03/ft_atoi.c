/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouza <asouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:55:00 by asouza            #+#    #+#             */
/*   Updated: 2022/09/26 12:58:03 by asouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	whitespaces(char *str, int *ptr_i)
{
	int	c;
	int	i;

	i = 0;
	c = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			c *= -1;
		i++;
	}
	*ptr_i = i;
	return (c);
}

int	ft_atoi(char *str)
{
	int	s;
	int	r;
	int	i;

	r = 0;
	s = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		r *= 10;
		r += str[i] - 48;
		i++;
	}
	r *= s;
	return (r);
}

/*int	main(void)
{
	char *s = "   ---+--+01234s506789ab567";
	printf("%d", ft_atoi(s));
}*/
