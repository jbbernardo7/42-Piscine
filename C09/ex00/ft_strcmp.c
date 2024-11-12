/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:30:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/22 17:39:09 by jbelece-         ###   ########.fr       */
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
