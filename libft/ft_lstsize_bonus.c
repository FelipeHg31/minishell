/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 03:02:24 by juan-her          #+#    #+#             */
/*   Updated: 2026/01/24 22:32:38 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_shell *lst)
{
	int		i;
	t_shell	*size;

	i = 0;
	size = lst;
	while (size)
	{
		i++;
		size = size->next;
	}
	return (i);
}
