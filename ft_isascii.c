/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 20:30:37 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:07:38 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_isascii(int x)
{
	return (x >= 0 && x <= 127);
}
// int ft_isascii(int x){
// 	if (x >= 0 && x =< 127)
// 		return 1;
// 	return 0;
// }
// int	main(){
// 	printf("%d", ft_isascii(';'));
// 	return 0;
// }