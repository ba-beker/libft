/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:09:23 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 10:19:41 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int	a;
	int	j;

	a = 0;
	j = ft_strlen(s1);
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (*s2 && --n)
	{
		while (*s1 && *s1 == *s2)
		{
			a++;
			if (a == j)
			{
				while (a-- > 1)
					s1--;
				return ((char *)s1);
			}
			s1++;
			s2++;
		}
		s2++;
	}
	return (0);
}
