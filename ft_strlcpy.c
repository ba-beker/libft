/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:20:47 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/18 14:22:39 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	while (*src && i + 1 < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	while (*src)
	{
		i++;
		src++;
	}
	return (i);
}
// int main()
// {
// 	char arr0[20];
// 	char arr1[] = "hello";
// 	size_t buffer = 2;
// 	printf("%ld\n", ft_strlcpy(arr0, arr1, buffer));
// 	printf("%s", arr0);
// }