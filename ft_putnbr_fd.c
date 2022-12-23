/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobabeke <mobabeke@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 11:58:43 by mobabeke          #+#    #+#             */
/*   Updated: 2022/12/23 11:59:43 by mobabeke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	if (!n)
		ft_putchar_fd('0', fd);
	if (n > 1)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	if (n % 10 != 0)
		ft_putchar_fd((n % 10) + 48, fd);
}
// int main()
// {
// 	int a = -0;
// 	ft_putnbr_fd(a,1);
// }