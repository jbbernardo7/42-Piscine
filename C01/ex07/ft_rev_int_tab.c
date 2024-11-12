/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:19:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/07 18:26:19 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	temp;
	int	last;

	c = 0;
	last = size - 1;
	while (c < size / 2)
	{
		temp = tab[c];
		tab[c++] = tab[last];
		tab[last--] = temp;
	}
}

/*int	main(void)
{
	int size = 9;
	int	numbers[size];
	int	c;

	c = 0;
	while (c < size)
	{
		numbers[c] = 48 + c;
		write(1, &numbers[c], 1);
		c++;
	}
	ft_rev_int_tab(numbers, size);
	//writes array again
	write(1, "\n", 1);
	c = 0;
	while (c < size)
	{
		write(1, &numbers[c], 1);
		c++;
	}
	return (0);
}*/
