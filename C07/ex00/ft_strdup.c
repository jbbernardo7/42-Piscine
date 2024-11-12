/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:53:14 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/19 16:53:16 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	char	*res;
	int		size;
	int		count;

	count = 0;
	size = ft_strlen(src);
	res = malloc(size + 1);
	if (res == NULL)
		return (NULL);
	while (count <= size)
	{
		res[count] = src[count];
		count++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char *str = "Hello there";
	char *dup;

	dup = ft_strdup(str);
	printf("str: %s\n", str);
	printf("dup: %s\n", dup);
	return (0);
}*/
