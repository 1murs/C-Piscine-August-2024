/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:04:18 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/05 19:28:43 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	end_char;
	char	start_char;

	start_char = 'a';
	end_char = 'z';
	while (start_char <= end_char)
	{
		write(1, &start_char, 1);
		start_char ++;
	}
}
