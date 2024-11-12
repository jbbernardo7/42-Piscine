/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:57:24 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/14 17:32:41 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	while (power-- > 0)
	{
		result = result * nb;
	}
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(2, 5));
	printf("%d\n", ft_iterative_power(5, 0));
	return (0);
}*/
