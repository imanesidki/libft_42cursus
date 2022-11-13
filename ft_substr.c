/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:07:48 by isidki            #+#    #+#             */
/*   Updated: 2022/11/13 02:15:40 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	unsigned int	srclen;

	if (!s)
		return (NULL);
	srclen = (unsigned int)ft_strlen(s);
	i = -1;
	if (start >= srclen)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	sub = (char *) malloc(len + 1);
	if (!sub)
		return (NULL);
	while (++i < len && start[s] && start < srclen)
		*(sub + i) = *(s + start + i);
	sub[i] = '\0';
	return (sub);
}
