/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:12:45 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/11 16:51:25 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	int	res;

	res = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		res = 1;
	}
	return (res);
}

int	is_numeric(char c)
{
	int	res;

	res = 1;
	if (c < '0' || c > '9')
	{
		res = 0;
	}
	return (res);
}

void	check_first_char(char *src)
{
	if (*src >= 'a' && *src <= 'z')
	{
		*src -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	char	*beginning;

	beginning = str;
	check_first_char(str++);
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			if (is_alpha(*(str - 1)) || is_numeric(*(str - 1)))
			{
				*str += 32;
			}
		}
		else if (is_alpha(*(str)))
		{
			if (!is_alpha(*(str - 1)) && !is_numeric(*(str - 1)))
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (beginning);
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "ola tUDo 42palavrAS 42PRAS quta-e-duas; cita+e+um";
	printf("%s", str);
	char *test = ft_strcapitalize(str);
	printf("\n%s", str);
	printf("\n%s", test);
}*/
