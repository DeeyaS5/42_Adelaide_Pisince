/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjezukai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 14:59:12 by jjezukai          #+#    #+#             */
/*   Updated: 2022/01/15 15:20:35 by jjezukai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rushb(char start, char mid, char end, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
		{
			write(1, &start, 1);
		}
		else if (i == x)
		{
			write(1, &end, 1);
		}
		else
		{
			write(1, &mid, 1);
		}
		i++;
	}
	write(1, &"\n", 1);
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
		{
			rushb('A', 'B', 'C', x);
		}
		else if (i == y)
		{
			rushb('A', 'B', 'C', x);
		}
		else
		{
			rushb('B', ' ', 'B', x);
		}
		i++;
	}
}
