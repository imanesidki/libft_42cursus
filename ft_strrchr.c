/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:01:12 by isidki            #+#    #+#             */
/*   Updated: 2022/10/30 23:47:18 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		len;
	char	*str;

	str = (char *) string;
	len = ft_strlen (string);
	if (!str)
		return (NULL);
	while (len >= 0)
	{
		if (*(str + len) == (char)c)
			return (str + len);
		len--;
	}
	return (NULL);
}
