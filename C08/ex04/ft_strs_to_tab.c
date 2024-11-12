/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:53:41 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/21 21:30:42 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
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
}
