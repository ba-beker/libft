/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 14:11:31 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/15 14:32:12 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
char	*ft_strchr(const char *str, int c)
{
	while (*str && *str != (unsigned char)c)
		str++;
	if (*str == (unsigned char)c)
		return ((char *) str);
	return (0);
}
// int main(){
// 	printf("%s\n",ft_strchr("Hello.world",'.'));
// }