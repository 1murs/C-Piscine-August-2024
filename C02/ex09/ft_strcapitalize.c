/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbezsmer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 16:19:41 by pbezsmer          #+#    #+#             */
/*   Updated: 2024/08/08 16:49:44 by pbezsmer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upper_lower_numeric(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else
		return (4);
}

char	*transform_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_upper_lower_numeric(str[i]) == 1)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;
	char	*lower_str;

	i = 0;
	flag = 1;
	lower_str = transform_str(str);
	while (lower_str[i])
	{
		if (lower_str[i] >= 48 && lower_str[i] <= 57)
			flag = 0;
		else if (flag && is_upper_lower_numeric(lower_str[i]) == 2)
		{
			lower_str[i] = lower_str[i] - 32;
			flag = 0;
		}
		else if (is_upper_lower_numeric(lower_str[i]) == 4)
			flag = 1;
		i++;
	}
	return (lower_str);
}
