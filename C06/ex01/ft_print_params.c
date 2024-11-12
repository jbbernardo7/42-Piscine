/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:35:01 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/18 14:43:28 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	c;

	(void) argc;
	i = 1;
	while (argv[i])
	{
		c = 0;
		while (argv[i][c])
		{
			ft_putchar(argv[i][c]);
			c++;
		}
		i++;
		ft_putchar('\n');
	}
	return (1);
}
