/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:33:05 by isidki            #+#    #+#             */
/*   Updated: 2022/11/13 00:37:32 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	int		i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	j = 0;
	len_src = ft_strlen (src);
	if (!dstsize)
		return (len_src);
	len_dest = ft_strlen (dest);
	if (len_dest < dstsize)
	{
		while (dest[i])
			i++;
		while (src[j] && j < dstsize - len_dest - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (len_dest + len_src);
	}
	else
		return (len_src + dstsize);
}
