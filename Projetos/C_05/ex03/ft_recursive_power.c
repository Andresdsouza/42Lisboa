/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouza <asouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:45:00 by asouza            #+#    #+#             */
/*   Updated: 2022/09/27 11:50:33 by asouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	a;

	a = nb;
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (a);
}

/*int	main(void)
{
	printf("%i", ft_recursive_power(2, 4));
}*/
