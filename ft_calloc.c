/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:21:51 by isidki            #+#    #+#             */
/*   Updated: 2022/10/31 01:21:12 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t eltCount, size_t eltSize)
{
	void	*p;

	p = malloc(eltCount * eltSize);
	if (!p)
		return (NULL);
	ft_bzero(p, eltCount * eltSize);
	return (p);
}
