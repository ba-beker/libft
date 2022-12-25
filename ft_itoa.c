/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:52:42 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 19:02:08 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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
	int		is_negative;

	is_negative = 0;
	n_len = int_len(n);
	new = malloc(sizeof(char) * n_len + 1);
	if (!new)
		return (0);
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
		new = ft_strjoin("-", new);
	return (new);
}
