/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan-her <juan-her@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:14:16 by juan-her          #+#    #+#             */
/*   Updated: 2026/01/28 00:08:28 by juan-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void ft_loop(t_shell *mini)
{
    char *line;

    (void)mini;
    while (1)
    {
        line = readline("minishel> ");
        if (!line)
            return ;
        if (*line)
        {
            printf("linea %s", line);
            add_history(line);
        }
    }
}