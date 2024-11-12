/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 21:09:50 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/08 18:27:09 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*int	main(void)
{
	int div = 63;
	int mod = 10;

	ft_ultimate_div_mod(&div, &mod);
	div = div + 48;
	mod = mod + 48;
	write(1, &div, 1);
	write(1, &mod, 1);
}*/
