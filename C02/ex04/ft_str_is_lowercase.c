/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 18:35:50 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			res = 0;
			break ;
		}
		str++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("aBcD"));	
	printf("%d\n", ft_str_is_lowercase("ABCDFE"));	
	printf("%d\n", ft_str_is_lowercase("amz"));	
}*/
