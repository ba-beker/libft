/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:24:16 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/24 17:20:25 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*new;
	unsigned int	i;

	if (!s)
		return (0);
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
