/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:23:59 by isidki            #+#    #+#             */
/*   Updated: 2022/11/01 23:33:58 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (first[i] != '\0' && second[i] != '\0'
		&& first[i] == second[i] && i < len - 1)
			i++;
	return ((unsigned char)first[i] - (unsigned char)second[i]);
}
