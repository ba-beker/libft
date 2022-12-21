/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:24:16 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/21 08:55:34 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	new = malloc(len * sizeof(char));
	if (!new)
		return (0);
	i = 0;
	while (*s && i++ < start)
		s++;
	i = 0;
	while (*s && i < len)
		new[i++] = *s++;
	return (new);
}
// int main(){
// 	char *arr = "hi there";
// 	printf("%s",ft_substr(arr,1,10));
// }
