/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 10:31:29 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/04 11:34:51 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	draw_line(int lar, char d, char m, char f)
{
	int	row;

	row = 0;
	while (row < lar)
	{
		if (row == 0)
			ft_putchar(d);
		else if (row == lar - 1)
			ft_putchar(f);
		else
			ft_putchar(m);
		row++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	column;

	column = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (column < y)
	{
		if (column == 0)
			draw_line(x, '/', '*', '\\');
		else if (column == y - 1)
			draw_line(x, '\\', '*', '/');
		else
			draw_line(x, '*', ' ', '*');
		column++;
	}
}
