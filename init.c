/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 20:41:44 by juan-her          #+#    #+#             */
/*   Updated: 2026/01/27 23:07:52 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void ft_init_shell(t_shell *mini, char **ev)
{
    mini = ft_lstnew();
    mini->env = ev;
    mini->state = 1;
}