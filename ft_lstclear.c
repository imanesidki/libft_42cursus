/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:27:27 by isidki            #+#    #+#             */
/*   Updated: 2022/10/29 23:57:32 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*parcour;
	t_list	*l;

	if (!lst || !del)
		return ;
	parcour = *lst;
	while (parcour)
	{
		l = parcour;
		parcour = parcour->next;
		del (l->content);
		free (l);
	}
	*lst = NULL;
}
