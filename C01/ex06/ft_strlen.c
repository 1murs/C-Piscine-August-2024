/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:29:50 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/07 18:35:49 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	index;
	int	count_str;

	index = 0;
	count_str = 0;
	while (str[index] != '\0')
	{
		index++;
		count_str++;
	}
	return (count_str);
}
