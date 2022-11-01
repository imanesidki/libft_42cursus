/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:50:14 by isidki            #+#    #+#             */
/*   Updated: 2022/10/30 23:48:37 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char	*sr;
	unsigned char	*ds;
	size_t			i;

	if (!dst && !src)
		return (NULL);
	sr = (unsigned char *)src;
	ds = (unsigned char *)dst;
	i = 0;
	if (ds > sr)
	{
		while (i < len)
		{
			ds[len - i - 1] = sr[len - i - 1];
			i++;
		}
	}
	while (i < len)
	{
		*(ds + i) = *(sr + i);
		i++;
	}
	return ((void *)ds);
}
