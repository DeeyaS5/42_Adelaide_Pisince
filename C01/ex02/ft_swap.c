/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:10:01 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/12 10:43:59 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int		temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>
int main(void){
	int a = 1;
	int b = 2;

	int *ptra = &a;
	int *ptrb = &b;

	ft_swap(ptra, ptrb);
	
	printf("a is now eqal to %d and b is now equal to %d", (a), (b));
	return 0;
}*/
