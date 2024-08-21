/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:30:25 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/20 11:31:38 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int arg, char **kwarg)
{
	int	i;
	int	count;

	count = 0;
	i = 1;
	while (kwarg[i])
	{
		i++;
		count++;
	}
	i = 1;
	while (count >= i)
	{
		ft_rev_params(kwarg[count]);
		count--;
	}
	(void)arg;
}
