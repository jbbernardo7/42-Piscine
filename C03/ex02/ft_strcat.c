/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:15:33 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:36:37 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	char	*beginning;

	beginning = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
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
	char empty[] = "";
	printf("%s\n", str);
	printf("%s\n", ft_strcat(str, "World"));
	printf("%s\n", str);

	printf("%s\n", empty);
	printf("%s\n", ft_strcat(empty, "World"));
	printf("%s\n", empty);

	
}*/
