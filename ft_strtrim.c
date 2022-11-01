/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:46:48 by isidki            #+#    #+#             */
/*   Updated: 2022/10/23 16:38:18 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (i < len && ft_strchr(set, *(s1 + i)))
		i++;
	if (i == len)
		return (ft_strdup(""));
	while (len-- >= 0 && ft_strrchr(set, *(s1 + len)))
		;
	return (ft_substr(s1, i, (len - i + 1)));
}
