/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 11:13:09 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/20 11:15:46 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *str)
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

	i = 1;
	while (kwarg[i])
	{
		ft_print_params(kwarg[i]);
		i++;
	}
	(void)arg;
}
