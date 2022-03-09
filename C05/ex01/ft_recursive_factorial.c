/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:08:34 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/24 14:13:57 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int		count;

	count = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 1 || nb == 0)
	{
		return (1);
	}
	if (nb > 1)
	{
		count = ft_recursive_factorial((nb - 1)) * nb;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void){
	printf("%d \n", ft_recursive_factorial(5));
	return (0);
}*/
