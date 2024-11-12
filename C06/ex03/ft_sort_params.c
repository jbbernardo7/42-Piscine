/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:44:33 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/18 14:42:03 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);

void	ft_putstr(char *str);

void	check_args(int i, int argc, char *argv[]);

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		check_args(i, argc, argv);
		i++;
	}
	return (0);
}

void	check_args(int i, int argc, char *argv[])
{
	int	j;
	int	min_value;
	int	min_i;
	int	cmp;

	j = i;
	min_value = 0;
	min_i = i;
	while (j < argc)
	{
		cmp = ft_strcmp(argv[i], argv[j]);
		if (cmp > min_value)
		{
			min_i = j;
			min_value = cmp;
		}
		j++;
	}
	argv[0] = argv[i];
	argv[i] = argv[min_i];
	argv[min_i] = argv[0];
	ft_putstr(argv[i]);
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

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
