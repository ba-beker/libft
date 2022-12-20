/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:32:51 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/20 12:34:39 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

void	*ft_memset(void *str, int c, size_t n)
{
	void	*temp;

	temp = str;
	while (n--)
		*(char *)str++ = (unsigned char)c;
	return (temp);
}

void	ft_bzero(void *s, int nbyte)
{
	ft_memset(s, 0, nbyte);
}

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*bro;

	bro = malloc(nitems * size);
	if (!bro)
		return (0);
	ft_bzero(bro, nitems * size);
	return (bro);
}
// int main(){
// 	int *bro;
// 	bro = ft_calloc(3,4);
// 	printf("%d",*(bro + 0));
// 	printf("%d",*(bro + 1));
// 	printf("%d",*(bro + 2));
// }