/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:52:42 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/19 16:52:48 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	count;

	size = max - min;
	if (size <= 0)
		return (NULL);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	count = 0;
	while (min < max)
	{
		arr[count] = min;
		min++;
		count++;
	}
	return (arr);
}

/*#include <stdio.h>
int	main(int argc, char* argv)
{
	int *arr;
	int count;

	count = 0;
	arr = ft_range(5, 10);
	while (count < 5)
	{
		printf("%d ", arr[count]);
		count++;
	}
}*/
