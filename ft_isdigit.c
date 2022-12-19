/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:03:32 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:07:45 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
int	ft_isdigit(int x)
{
	return (x > 47 && x < 58);
}
// int ft_isdigit(int x){
// 	if (x > 47 && x < 58)
// 		return 1;
// 	return 0;
// }
// int	main(){
// 	printf("%d", ft_isdigit('2'));
// 	return 0;
// }