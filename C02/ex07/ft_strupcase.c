/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 19:06:03 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	char	*beginning;

	beginning = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
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
	printf("%s\n", ft_strupcase(test));	
}*/
