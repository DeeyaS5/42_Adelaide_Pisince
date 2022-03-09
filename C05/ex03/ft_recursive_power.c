/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 12:08:42 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/24 14:27:46 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power < 0 || (nb == 0 && power != 0))
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
}
/*
#include <stdio.h>
int main(void){
	int pow = ft_recursive_power(-2, -2);
	printf("%d \n", pow);
	return (0);
}*/
