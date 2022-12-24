/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:55:10 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 20:53:26 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdlib.h>

int	count_devider(char const *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		if (*s == c)
			i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*a;
	int		new_index;
	int		old_index;
	int		i;

	a = ft_strtrim(s, &c);
	i = 0;
	new_index = 0;
	old_index = 0;
	new = malloc(sizeof(char *) * count_devider(a, c) + 2);
	if (!new)
		return (0);
	while (a[i++])
	{
		if (a[i] == c)
		new[new_index] = ft_substr(s, old_index, (i - old_index));
		new_index++;
		old_index = i + 1;
	}	
	new[new_index] = ft_substr(s, old_index, (i - old_index));
	new_index++;
	old_index = i + 1;
	new[new_index] = '\0';
	return (new);
}
