/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:41:22 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/19 12:41:34 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		res = 1;
		while (power > 0)
		{
			res = res * nb;
			power-- ;
		}
		return (res);
	}
}
// int main(void)
// {
//     printf("%d", ft_iterative_power(4, 3));
// }
