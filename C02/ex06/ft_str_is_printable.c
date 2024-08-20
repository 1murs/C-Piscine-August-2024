/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <mpbezsmer@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:39:27 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/08 14:42:31 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char c)
{
	if (c >= 32 && c <= 127)
		return (1);
	else
		return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_printable(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
