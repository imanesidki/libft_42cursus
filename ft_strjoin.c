/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:26:01 by isidki            #+#    #+#             */
/*   Updated: 2022/11/13 02:32:51 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	str = (char *)malloc(i + j + 1);
	if (!str)
		return (NULL);
	if (s1 && s2)
	{
		ft_memcpy(str, (void *)s1, i);
		ft_memcpy(str + i, (void *)s2, j);
		*(str + i + j) = '\0';
		return (str);
	}
	return (NULL);
}
