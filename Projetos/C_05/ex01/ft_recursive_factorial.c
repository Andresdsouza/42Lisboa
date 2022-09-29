/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouza <asouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:33:59 by asouza            #+#    #+#             */
/*   Updated: 2022/09/27 11:49:08 by asouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb > 0)
	{
		a *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (a);
}

/*int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}*/
