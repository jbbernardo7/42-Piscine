/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:24:59 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:50:46 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while (src[c] && c < n)
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}

/*#include <unistd.h>
#include <stdio.h>
int main(void)
{
	char str1[] = "Macacoooooo";
	char str2[] = "Banana";
	
	printf("str1: %s\nstr2: %s\n", str1, str2);
	ft_strncpy(str1, str2, 3);
	printf("str1: %s\nstr2: %s\n", str1, str2);
	
	return (0);
}*/
