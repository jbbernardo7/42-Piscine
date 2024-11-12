/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:53:41 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/22 19:19:49 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strcopy(char *str, int size)
{
	char	*ptr;
	int		c;

	c = 0;
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	while (str[c])
	{
		ptr[c] = str[c];
		c++;
	}
	ptr[c] = '\0';
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;
	int			length;

	result = malloc(sizeof(t_stock_str) * (ac + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		length = ft_strlen(av[i]);
		result[i].size = length;
		result[i].str = av[i];
		result[i].copy = ft_strcopy(av[i], length);
		i++;
	}
	result[i].str = 0;
	return (result);
}*/

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	c;

	i = 0;
	while (par[i].str)
	{
		c = 0;
		while (par[i].str[c])
			write(1, &par[i].str[c++], 1);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		c = 0;
		while (par[i].copy[c])
			write(1, &par[i].copy[c++], 1);
		write(1, "\n", 1);
		i++;
	}
}

/*int	main(int argc, char **argv)
{
	t_stock_str *teste;

	teste = ft_strs_to_tab(argc, argv);
	ft_show_tab(teste);
	return (0);
}*/
