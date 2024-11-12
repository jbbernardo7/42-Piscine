/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 18:38:03 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
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
	printf("%d\n", ft_str_is_uppercase("aBcD"));	
	printf("%d\n", ft_str_is_uppercase("ABCDFE"));	
	printf("%d\n", ft_str_is_uppercase("amz"));	
}*/
