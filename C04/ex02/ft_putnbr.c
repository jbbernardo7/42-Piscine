/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:41:14 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/12 17:21:28 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

/*int	main(void)
{
	ft_putnbr(432);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-432);
	write(1, "\n", 1);

	ft_putnbr(9847584);
	write(1, "\n", 1);

}*/

void	ft_putnbr(int nb)
{
	char	t;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		t = nb + 48;
		write(1, &t, 1);
		return ;
	}
	t = (nb % 10) + 48;
	ft_putnbr(nb / 10);
	write(1, &t, 1);
}
