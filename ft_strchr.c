/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 17:28:33 by isidki            #+#    #+#             */
/*   Updated: 2022/10/30 23:47:54 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	str = (char *)string;
	len = ft_strlen(string);
	while (i < len || c == '\0')
	{
		if (*(str + i) == (char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
