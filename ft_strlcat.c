/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:14:45 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/17 19:44:12 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;

	i = 0;
	
	while (*dst && i < dstsize)
	{
		dst++;
		i++;
	}
	while (*src && i < dstsize)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	return (i);
}
// int main(){
// 	int buffer = 30;
// 	char arr1[buffer];
// 	char arr0[] = "I'm a 42 Wolfsburg Student";
// 	printf("%ld", ft_strlcat(arr1,arr0,buffer));
// }
