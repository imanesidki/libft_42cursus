/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:15:21 by isidki            #+#    #+#             */
/*   Updated: 2022/11/13 01:50:42 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!big && !len)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == *little && len - i >= ft_strlen(little)
			&& ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
