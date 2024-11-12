/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:09:50 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/07 18:32:02 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int div;
	int mod;

	ft_div_mod(63, 10, &div, &mod);
	div = div + 48;
	mod = mod + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}*/
