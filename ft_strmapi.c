/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 08:44:07 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/23 08:45:02 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		i;

	if (!s)
		return (0);
	ret = malloc(sizeof(char *) * ft_strlen(s) + 1);
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
// char	add(unsigned int i, char a)
// {
// 	return (a + i);
// }
// int main ()
// {
// 	char *s = "abc";
// 	printf("%s", ft_strmapi(s, add));
// }