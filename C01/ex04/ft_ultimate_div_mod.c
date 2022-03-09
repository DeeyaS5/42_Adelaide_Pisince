/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:19:39 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/12 12:49:42 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		tempa;
	int		tempb;

	tempa = *a;
	tempb = *b;
	*a = tempa / tempb;
	*b = tempa % tempb;
}
/*
#include <stdio.h>
int main(){
	int a = 23;
	int b = 4;
	printf("a is equal to %d and b is equal to %d\n", a, b);
	int *ptra = &a;
	int *ptrb = &b;

	ft_ultimate_div_mod(ptra, ptrb);
	printf("a divided by b is %d mod %d\n",a , b);
	return 0;
}*/
