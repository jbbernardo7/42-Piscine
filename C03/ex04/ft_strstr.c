/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:37:26 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:49:07 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[count])
	{
		i = 0;
		while (str[count + i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
			{
				return (&str[count]);
			}
			i++;
		}
		count++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	char str[150] = "MacacoBananaMacaco";
	char key[20] = "Banan";
	char *res;

	res = ft_strstr(str, key);
	printf("%s", res);
}*/
