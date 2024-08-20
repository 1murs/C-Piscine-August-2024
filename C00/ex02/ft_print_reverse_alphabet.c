/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <pbezsmer@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 11:20:26 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/05 19:30:25 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	end_word;
	char	start_word;

	end_word = 'a';
	start_word = 'z';
	while (start_word >= end_word)
	{
		write(1, &start_word, 1);
		start_word --;
	}
}
