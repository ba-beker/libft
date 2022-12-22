/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:52:42 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/22 23:54:22 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*new;
	unsigned int	i;

	i = 0;
	new = malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!new)
		return (0);
	while (*s1)
		new[i++] = *s1++;
	while (*s2)
		new[i++] = *s2++;
	new[i] = '\0';
	return (new);
}

int	int_len(int a)
{
	int	i;

	i = 0;
	if (a < 0)
		a = -a;
	while (a >= 1)
	{
		a /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		n_len;
	char	*minus;
	int		is_negative;

	is_negative = 0;
	minus = "-";
	n_len = int_len(n);
	new = malloc(sizeof(char) * n_len + 1);
	new[n_len] = '\0';
	if (n < 0)
	{
		n = -n;
		is_negative = 1;
	}
	while (n_len)
	{
		new[n_len - 1] = (n % 10) + 48;
		n /= 10;
		n_len--;
	}
	if (is_negative)
		new = ft_strjoin(minus, new);
	return (new);
}
// int main()
// {
// 	int a = -7546736;
// 	// printf("%c",a);
// 	printf("%s", ft_itoa(a));
// }