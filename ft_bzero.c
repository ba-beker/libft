/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:15:26 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:00:56 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
