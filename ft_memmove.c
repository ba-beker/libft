/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 17:21:28 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 18:53:33 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t numBytes)
{
	unsigned int	i;
	char			*to_c;
	char			*from_c;

	i = 0;
	to_c = (char *) to;
	from_c = (char *) from;
	if (!to && from)
		return (0);
	while (i < numBytes)
	{
		to_c[i] = from_c[i];
		i++;
	}
	i = 0;
	return (to_c);
}
