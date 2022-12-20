/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 15:18:48 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/20 15:21:01 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*temp;
	int		j;
	int		len;

	j = 0;
	len = ft_strlen(s);
	temp = (char *)malloc(sizeof(char) * len + 1);
	if (!temp)
		return (0);
	while (*s)
		temp[j++] = *s++;
	temp[j] = '\0';
	return (temp);
}
// int main()
// {
// 	char *arr;
// 	arr = "42 Wolfsburg";
// 	printf("%s\n", ft_strdup(arr));
// }