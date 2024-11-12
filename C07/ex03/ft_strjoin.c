/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:53:33 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/19 16:53:37 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		str++;
		count++;
	}
	return (count);
}

int	ft_strseqlen(int size, char **strs, char *sep)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum += ft_strlen(strs[i]);
		i++;
	}
	sum += (ft_strlen(sep) * (size - 1));
	sum++;
	return (sum);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		j;
	int		k;
	int		sum;

	i = 0;
	j = 0;
	k = 0;
	sum = ft_strseqlen(size, strs, sep);
	result = malloc(sum);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j++];
		j = 0;
		if (i == size - 1)
			break ;
		while (sep[j])
			result[k++] = sep[j++];
		i++;
	}
	result[k] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main()
{
	char *strs[3] = {"Hello", "Olaa", "Haloo"};
	char *sep = ", ";
	
	printf("%d\n", ft_strseqlen(3, strs, sep));
	printf("%s", ft_strjoin(3, strs, sep));
	return (0);
}*/
