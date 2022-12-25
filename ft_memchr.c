/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:46:31 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 00:30:44 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	char			*t;

	i = 0;
	while (str && i < n)
	{
		t = (char *)str;
		if (*t == c)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}
