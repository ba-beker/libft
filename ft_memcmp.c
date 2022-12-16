/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:58:40 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/16 17:01:45 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	char			*a;
	char			*b;

	i = 0;
	while (str1 && i < n)
	{
		a = (char *)str1;
		b = (char *)str2;
		if (*a != *b)
			return (*a - *b);
		str1++;
		str2++;
		i++;
	}
	return (0);
}

// int	main(){
// 	printf("%d", ft_memcmp("Hello", "hello",2));
// }