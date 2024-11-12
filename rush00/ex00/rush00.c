/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 12:56:19 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/07 15:30:10 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

//x = 5;
//y = 3;
void	rush(int x, int y)
{
	int	countX;
	int countY;

	x = 123;
	y = 42;
	countX = 0;
	countY = 0;
	while (countY < y)
	{
		while (countX < x)
		{
			if ((countX == 0 || countX == x-1) && (countY == y-1 || countY == 0)) //extremidades
			{
				ft_putchar('o');
			}
			else if(countY == 0 || countY == y-1)
			{
				ft_putchar('-');
			}
			else if(countX == 0 || countX == x-1)
			{
				ft_putchar('|');
			}
			else
			{
				ft_putchar(' ');
			}
			countX++;
		}
		countX = 0;
		ft_putchar('\n');
		countY++;
	}
}
