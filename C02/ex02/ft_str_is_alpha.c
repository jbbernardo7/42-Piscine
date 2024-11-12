/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 17:30:35 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/09 18:53:59 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	res;

	res = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			if (!(*str >= 'a' && *str <= 'z'))
			{
				res = 0;
				break ;
			}
		}
		str++;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_str_is_alpha("teste"));
	printf("%d\n", ft_str_is_alpha("te2ste"));	
}*/
