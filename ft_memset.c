/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 11:12:04 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 11:13:01 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	*ft_memset(void *str, int c, size_t n)
{
	void	*temp;

	temp = str;
	while (n--)
		*(char *)str++ = (unsigned char)c;
	return (temp);
}
// int main(){
// 	char name[] = "John";
// 	ft_memset(name + 1,'U',2);
// 	printf("%s",name);
// 	return 0;
// }