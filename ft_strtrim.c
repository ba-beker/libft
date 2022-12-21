/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:21:34 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/21 13:23:15 by mobabeke         ###   ########.fr       */
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

int	check(char chr, const char *c)
{
	while (*c)
		if (*c++ == chr)
			return (1);
	return (0);
}

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*finish;
	char	*returned;

	start = (char *)s1;
	finish = start + ft_strlen(s1);
	while (*start && check(*start, set))
		start++;
	while (finish && check(*(finish - 1), set))
		finish--;
	returned = ft_substr(start, 0, finish - start);
	return (returned);
}
// int main()
// {
// 	char *arr = "   	hi there			";
// 	char *arr0 = " 	";
// 	printf("%s", ft_strtrim(arr, arr0));
// 	return 0;
// }