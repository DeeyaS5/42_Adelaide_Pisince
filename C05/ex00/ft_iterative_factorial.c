/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 11:40:09 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/24 14:14:07 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		count;
	int		i;

	i = 1;
	count = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		count = count * i;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(void){
	printf("%d \n", ft_iterative_factorial(5));
	return (0);
}*/
