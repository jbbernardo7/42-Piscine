/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:30:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:48:52 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	res;
	int	count;

	res = 0;
	count = 0;
	while (s1[count])
	{
		if (s1[count] != s2[count])
		{
			break ;
		}
		count++;
	}
	res = s1[count] - s2[count];
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	int res = 0;
	res = ft_strcmp("Ola", "Hello");
	printf("%d\n", res);
	res = ft_strcmp("Teste", "Teste");
	printf("%d\n", res);
	res = ft_strcmp("Hello", "Ola");
	printf("%d\n", res);
	res = ft_strcmp("zfz", "gfg");
	printf("%d\n", res);

	return (0);
}*/
