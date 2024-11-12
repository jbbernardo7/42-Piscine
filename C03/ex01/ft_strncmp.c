/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:30:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/12 16:44:29 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (s1[count] != s2[count] || !s1[count] || !s2[count])
		{
			return (s1[count] - s2[count]);
		}
		count++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	int res = 0;
	res = ft_strncmp("", "", 3);
	printf("%d\n", res);
	res = ft_strncmp("ABC", "AB", 3);
	printf("%d\n", res);
	res = ft_strncmp("ABC", "AB",2);
	printf("%d\n", res);
	res = ft_strncmp("zfz", "gfg",2);
	printf("%d\n", res);

	return (0);
}*/
