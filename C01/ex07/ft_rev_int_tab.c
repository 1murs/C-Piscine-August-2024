/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:57:37 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/07 18:33:12 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp;

	index = 0;
	while (index < size - 1)
	{	
		size--;
		temp = tab[size];
		tab[size] = tab[index];
		tab[index] = temp;
		index++;
	}
}
