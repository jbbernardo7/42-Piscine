/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:19:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/08 18:29:38 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	itr1;
	int	itr2;

	itr1 = 0;
	itr2 = 0;
	while (itr1 < size - 1)
	{
		while (itr2 < size - 1 - itr1)
		{
			if (tab[itr2] > tab[itr2 + 1])
			{
				ft_swap(&tab[itr2], &tab[itr2 + 1]);
			}
			itr2++;
		}
		itr1++;
		itr2 = 0;
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
		numbers[c] = 57 - c;
		write(1, &numbers[c], 1);
		c++;
	}
	ft_sort_int_tab(numbers, size);
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
