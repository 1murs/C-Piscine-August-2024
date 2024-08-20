/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 17:26:48 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/14 11:06:22 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				count;
	int				dest_len;
	unsigned int	i;

	i = 0;
	count = 0;
	while (dest[i] != '\0')
	{
		count++;
		i++;
	}
	dest_len = count;
	i = 0;
	while ((i < nb) && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
