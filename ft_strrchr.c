/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:01:12 by isidki            #+#    #+#             */
/*   Updated: 2022/11/13 01:08:09 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		len;
	char	*str;

	str = (char *) string;
	len = ft_strlen (string);
	while (len >= 0)
	{
		if (*(str + len) == (char)c)
			return (str + len);
		len--;
	}
	return (NULL);
}
