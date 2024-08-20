/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:51:42 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/19 17:57:30 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	count;
	int	number;

	i = 0;
	count = 0;
	number = nb;
	while (1)
	{
		i++;
		if ((number % i) == 0)
			count++;
		if (i == number)
		{
			if (count == 2)
			{
				return (number);
			}
			i = 0;
			count = 0;
			number++;
		}
	}
}
// int main(void)
// {
//     printf("%d", ft_find_next_prime(4)); 
// }
