/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:22:37 by isidki            #+#    #+#             */
/*   Updated: 2022/11/02 00:08:09 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*dst;
	int		i;

	i = ft_strlen(source);
	dst = (char *) malloc(i + 1);
	if (!dst || !source)
		return (NULL);
	ft_memcpy((void *)dst, (void *)source, i);
	ft_memset((void *)(dst + i), '\0', 1);
	return (dst);
}
