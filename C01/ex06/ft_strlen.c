/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 22:19:31 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/07 18:26:54 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c])
	{
		c++;
	}
	return (c);
}

/*int	main(int argc, char *argv[])
{
	int	res;

	if (argc > 1)
	{
		res = ft_strlen(argv[1]) + 48;
		write(1, &res, 1);
	}
	return (0);
}*/
