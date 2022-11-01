/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:13:18 by isidki            #+#    #+#             */
/*   Updated: 2022/11/01 23:43:17 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd ('-', fd);
		i *= -1;
	}
	if (i < 10)
	{
		ft_putchar_fd (i + 48, fd);
	}
	if (i >= 10)
	{
		ft_putnbr_fd ((i / 10), fd);
		ft_putnbr_fd ((i % 10), fd);
	}
}
