/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbelece- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:59:42 by jbelece-          #+#    #+#             */
/*   Updated: 2024/09/18 20:30:34 by jbelece-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_ten_queens_puzzle(void);
int		is_valid(int row, int col, int board[10][10]);
void	solve(int col, int board[10][10], int *res);

/*#include <stdio.h>
int	main(void)
{
	int result;

	result = ft_ten_queens_puzzle();
	printf("%d", result);
	return (0);
}*/

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10];
	int	result;
	int	*ptr;
	int	i;
	int	j;

	result = 0;
	ptr = &result;
	i = 0;
	j = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
	solve(0, board, ptr);
	return (result);
}

void	write_output(int board[10][10])
{
	int	row;
	int	col;
	int	num;

	num = 0;
	row = 0;
	col = 0;
	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			if (board[row][col] == 1)
			{
				num = row + 48;
				write(1, &num, 1);
			}
			row++;
		}
		col++;
	}
	write(1, "\n", 1);
}

int	check_horizontal_vertical(int row, int col, int board[10][10])
{
	int	x;

	x = 0;
	while (x < 10)
	{
		if (board[row][x] == 1)
			return (0);
		x++;
	}
	x = 0;
	while (x < 10)
	{
		if (board[x][col] == 1)
			return (0);
		x++;
	}
	return (1);
}

int	is_valid(int row, int col, int board[10][10])
{
	int	tr;
	int	tc;

	if (!check_horizontal_vertical(row, col, board))
		return (0);
	tr = row;
	tc = col;
	while (row >= 0 && col >= 0)
	{
		if (board[row][col] == 1)
			return (0);
		row--;
		col--;
	}
	while (tr <= 9 && tc >= 0)
	{
		if (board[tr][tc] == 1)
			return (0);
		tr++;
		tc--;
	}
	return (1);
}

void	solve(int col, int board[10][10], int *res)
{
	int	row;

	if (col >= 10)
	{
		write_output(board);
		*res += 1;
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_valid(row, col, board))
		{
			board[row][col] = 1;
			solve(col + 1, board, res);
			board[row][col] = 0;
		}
		row++;
	}
	return ;
}
