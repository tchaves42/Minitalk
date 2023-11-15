/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaves <tchaves@students.42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:15:39 by tchaves           #+#    #+#             */
/*   Updated: 2023/11/15 18:15:39 by tchaves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	check_signal(int sig)
{
	static int	bin;
	static char	chr;

	if (bin < 8)
	{
		if (sig == SIGUSR1)
			chr += (1 << (7 - bin));
		bin++;
	}
	if (bin == 8)
	{
		ft_printf("%c", chr);
		chr = 0;
		bin = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("The server pid is: %i\n", pid);
	signal(SIGUSR1, check_signal);
	signal(SIGUSR2, check_signal);
	while (1)
		pause();
}