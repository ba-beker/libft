/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:28:09 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:09:16 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
// int main(){
// 	char *arr = "42 Wolfsburg";
// 	printf("%s", ft_strlen(arr));
// }