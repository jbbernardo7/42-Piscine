/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:53:24 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/19 16:53:26 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*arr;
	int	count;

	size = max - min;
	if (size <= 0)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	count = 0;
	while (min < max)
	{
		arr[count] = min;
		min++;
		count++;
	}
	*range = arr;
	return (size);
}

/*#include <stdio.h>
int	main(int argc, char* argv)
{
	int *arr;
	int count;
	int res;

	count = 0;
	res = ft_ultimate_range(&arr, 5, 10);
	while (count < res)
	{
		printf("%d ", arr[count]);
		count++;
	}
	printf("\n %d", res);
}*/
