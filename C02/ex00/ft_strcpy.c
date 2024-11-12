/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:24:59 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 18:13:27 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*beginning;

	beginning = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (beginning);
}

/*#include <unistd.h>
#include <stdio.h>
int main(void)
{
	char str1[] = "Macacoooooo";
	char str2[] = "Banana";
	
	int c = 0;

	
	printf("str1: %s\nstr2: %s\n", str1, str2);
	ft_strcpy(str1, str2);
	printf("str1: %s\nstr2: %s\n", str1, str2);
	
	return (0);
}*/
