/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 02:03:23 by juan-her          #+#    #+#             */
/*   Updated: 2026/01/27 21:35:17 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_shell	*ft_lstnew(void)
{
	t_shell	*list;

	list = malloc(sizeof(t_shell));
	if (!list)
		return (NULL);
	list->args = NULL;
	list->here_doc = 0;
	list->next = NULL;
	return (list);
}
