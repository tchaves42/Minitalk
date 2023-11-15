/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@students.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:54:36 by tchaves           #+#    #+#             */
/*   Updated: 2023/11/15 17:54:36 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	transform(int pid, char sign)
{
	int	i = 7;
	int	bit;
	int	signal;

	bit = (sign >> i) & 1;
	i = 7;
	while (i >= 0) 
	{
        	if (bit == 1) 
		{
            		signal = SIGUSR1;
       		} 		
		else 
		{
			signal = SIGUSR2;
		}

		kill(pid, signal);
		usleep(200);
		i--;
	}
}

int	main(int ac, int **av)
{
	int	i;
	int	pid;

	i = 0;
	if (ac != 3)
	{
		ft_printf("Check the syntax: ./client + <server-pid> + <text-to-send>\n");
		return (0);
	}
	if (kill(ft_atoi(av[1]), 0) == -1)
	{
		ft_printf("Wrong pid, please check and try again!");
		return (0);
	}
	pid = ft_atoi(av[1]);
	i = 0;
	while (av[2][i])
	{
		transform(pid, av[2][i]);
		i++;
	}
	return (0);
}