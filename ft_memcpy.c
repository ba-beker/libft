/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:26:04 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:05:44 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, void *src, size_t n)
{
	unsigned int	i;
	char			*dest_c;
	char			*src_c;

	i = 0;
	dest_c = (char *)dest;
	src_c = (char *)src;
	if (dest == 0)
		return (0);
	while (i < n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
// int main()
// {
// 	char *arr1 = "copy";
// 	char arr2[100];
// 	ft_memcpy(arr2, arr1, 5);
// 	printf("%s",arr2);
// }