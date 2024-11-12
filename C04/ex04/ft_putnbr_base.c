/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:46:04 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/23 01:17:57 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbrz(int t, char *base, int length)
{
	long	nbr;

	nbr = t;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (nbr > (length - 1))
	{
		ft_putnbrz(nbr / length, base, length);
	}
	write(1, &base[nbr % length], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	base_len = check_base(base);
	if (base_len == 0)
		return ;
	ft_putnbrz(nbr, base, base_len);
}

/*int	main(int argc, char **argv)
{
	ft_putnbr_base(123, "01");
	ft_putnbr_base(-2147483648,"01");
	return (0);	
}*/
