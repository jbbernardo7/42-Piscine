/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:15:33 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:35:17 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*beginning;

	beginning = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb-- > 0)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (beginning);
}

/*#include <stdio.h>
int	main(void)
{
	char str[20] = "Hello";

	printf("%s\n", str);
	printf("%s\n", ft_strncat(str, "World", 3));
	printf("%s\n", str);

	printf("\n%s\n", str);
	printf("%s\n", ft_strncat(str, "Macacos", 4));
	printf("%s\n", str);
}*/
