/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 13:37:43 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/23 01:31:28 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || ft_isspace(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_inbase(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	signal;
	int	result;
	int	lenbase;
	int	base_i;

	lenbase = check_base(base);
	if (lenbase == 0)
		return (0);
	signal = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str++ == '-')
			signal = -signal;
	}
	base_i = ft_inbase(*str, base);
	while (str && base_i != -1)
	{
		result *= lenbase;
		result += base_i;
		base_i = ft_inbase(*++str, base);
	}
	return (result * signal);
}

/*#include <stdio.h>
int	main(int args, char *argv[])
{
	int res;

	if (args != 1)
	{
		printf("base check: %d\n", check_base(argv[2]));
		res = ft_atoi_base(argv[1], argv[2]);
		printf("num res: %d\n", res);
	}
	//printf("%d", res);
	return (0);
}*/
