/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 12:36:28 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/08 12:45:18 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_number(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
