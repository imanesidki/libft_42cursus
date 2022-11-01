/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:33:05 by isidki            #+#    #+#             */
/*   Updated: 2022/11/01 23:33:47 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int		i;
	size_t	j;
	size_t	len_dest;
	size_t	len_src;

	i = 0;
	j = 0;
	if (!dest && size == 0)
		return (ft_strlen(src));
	len_dest = ft_strlen (dest);
	len_src = ft_strlen (src);
	if (len_dest < size)
	{
		while (dest[i])
			i++;
		while (src[j] && j < size - len_dest - 1)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (len_dest + len_src);
	}
	else
		return (len_src + size);
}
