/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 21:14:14 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 10:19:29 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	there_is_point;

	there_is_point = 0;
	while (*str)
	{
		if (*str == c)
			there_is_point = 1;
		str++;
	}
	if (there_is_point == 0)
		return (0);
	while (*str != (unsigned char) c)
		str--;
	return ((char *) str);
}
