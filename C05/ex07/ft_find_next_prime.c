/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 16:55:04 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/14 17:35:28 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	itr;

	if (nb < 2)
		return (0);
	itr = 2;
	while (itr <= (nb / 2))
	{
		if (nb % itr == 0)
			return (0);
		itr++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	result;

	if (nb <= 2)
	{
		return (2);
	}
	result = 0;
	while (nb < 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (2147483647);
}

//2, 3, 5, 7, 11, 13
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(5));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(11));
	printf("%d\n", ft_find_next_prime(13));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(2147483422));
	printf("%d\n", ft_find_next_prime(2147483647));

	return (0);
}*/
