/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:24:59 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 22:08:24 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_length;

	src_length = 0;
	while (size-- > 1 && *src)
	{
		*dest++ = *src++;
		src_length++;
	}
	*dest = '\0';
	while (*src++)
	{
		src_length++;
	}
	return (src_length);
}

/*#include <stdio.h>
int main(void)
{
	char destination[4];
	char source[] = "Macaco";
	int result;
	
	printf("destination: %s\nsource: %s\n", destination, source);
	result = ft_strlcpy(destination, source, 4);
	printf("destination: %s\nsource: %s\nsrc_length: %d",
	 destination, source, result);
	
	return (0);
}*/
