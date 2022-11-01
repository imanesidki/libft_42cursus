/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 20:50:15 by isidki            #+#    #+#             */
/*   Updated: 2022/11/01 23:37:35 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*parcour;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	parcour = *lst;
	while (parcour->next)
		parcour = parcour->next;
	parcour->next = new;
}
