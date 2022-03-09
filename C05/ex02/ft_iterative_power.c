/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:22:34 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/24 14:26:44 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int		i;
	int		result;

	i = 0;
	result = 1;
	if (power == 0 && nb == 0)
	{
		return (1);
	}
	if (power < 0 || nb == 0)
	{
		return (0);
	}
	while (i++ < power)
	{
		result *= nb;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void){
	printf("%d \n", ft_iterative_power(0,9));
	return (0);
}*/
