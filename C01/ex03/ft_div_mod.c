/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:05:46 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/12 12:47:38 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main(void){
	int a = 23;
	int b = 4;
	int di = -1;
	int mo = -1;
	int *div = &di;
	int *mod = &mo;

	ft_div_mod(a,b,div,mod);

	printf("a= %d divided by b=%d is = %d mod %d \n",a,b,di,mo);
	return 0;
}*/
