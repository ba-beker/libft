/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:42:36 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/19 23:07:33 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_isalpha(char c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}

// int ft_isalpha(char c){
// 	if ((c > 64 && c < 91) || (c > 96 && c < 123))
// 		return 1;
// 	return 0;

// }
// int main(){
// 	printf("%d", ft_isalpha('J'));
// 	return 0;
// }