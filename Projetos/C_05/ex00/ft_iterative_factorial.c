/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouza <asouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:28 by asouza            #+#    #+#             */
/*   Updated: 2022/09/27 11:48:24 by asouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	a;

	a = 1;
	while (nb > 0)
	{
		a *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (a);
}

/*int	main(void)
{
	printf("%i", ft_iterative_factorial(5));
}*/
