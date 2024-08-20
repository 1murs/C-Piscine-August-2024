/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:45:21 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/16 10:48:05 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}
// int main(void)
// {
//     printf("%d", ft_iterative_factorial(6));
// }
