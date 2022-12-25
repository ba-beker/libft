/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 22:27:23 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 00:24:23 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	convert_to_number;
	int	multiplier;

	i = 0;
	multiplier = 1;
	while (*str)
		str++;
	str--;
	while (*str)
	{
		convert_to_number = *str - 48;
		i += convert_to_number * multiplier;
		str--;
		multiplier *= 10;
	}
	return (i);
}
