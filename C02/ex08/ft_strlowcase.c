/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 19:08:42 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	char	*beginning;

	beginning = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str += 32;
		}
		str++;
	}
	return (beginning);
}

/*#include <stdio.h>
int	main(void)
{
	char test[] = "OlaAaAa";
	printf("%s\n", test);	
	printf("%s\n", ft_strlowcase(test));	
}*/
