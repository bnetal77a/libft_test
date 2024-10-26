/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 10:05:46 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/25 15:11:00 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*curent;

	if (*lst == NULL)
	{
		*lst = new;
		new->next = NULL;
	}
	curent = *lst;
	while (curent->next != NULL)
		curent = curent->next;
	curent->next = new;
	new->next = NULL;
}
