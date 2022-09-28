/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asouza <asouza@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 12:03:58 by asouza            #+#    #+#             */
/*   Updated: 2022/09/21 11:11:07 by asouza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{ 
	printf("%d", ft_str_is_alpha("abcdefghijklmno"));
	printf("\n%d", ft_str_is_alpha("abc1defghijklmno"));
	printf("\n%d", ft_str_is_alpha("-_134556efghij6798"));
	printf("\n%d", ft_str_is_alpha(""));
}*/
