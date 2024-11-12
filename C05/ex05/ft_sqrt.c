/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:41:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/14 17:34:44 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	div;
	int	quo;
	int	res;

	if (nb == 1)
		return (1);
	div = 2;
	while (div <= (nb / 2))
	{
		quo = nb / div;
		res = nb % div;
		if (div > quo)
			return (0);
		if (quo == div && res == 0)
			return (div);
		div++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	printf("%d\n", ft_sqrt(16));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(20));
	printf("%d\n", ft_sqrt(-10));
}*/
