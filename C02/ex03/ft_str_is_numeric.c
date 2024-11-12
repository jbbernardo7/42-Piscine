/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 18:32:39 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
	printf("%d\n", ft_str_is_numeric("3211a"));	
	printf("%d\n", ft_str_is_numeric(".654"));	
	printf("%d\n", ft_str_is_numeric("324043"));	
}*/
