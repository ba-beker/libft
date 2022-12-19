/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 23:09:23 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 22:36:59 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

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
// int main()
// {
// 	char *s1 = " hi ";
// 	char *s2 = " hi ther";
// 	printf("%s", ft_strnstr(s1, s2, 4));
// 	return 0;
// }
	// not sure about this one and this should be in line 39
	// if (!ft_strlen(s1) || n < (unsigned int)ft_strlen(s2))
	// 	return (0);