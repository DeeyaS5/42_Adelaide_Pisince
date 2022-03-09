/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:22:33 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/26 17:07:15 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		count;
	int		len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * len);
	count = 0;
	while (min < max)
	{
		range[0][count] = min;
		count++;
		min++;
	}
	return (len);
}
/*
#include <stdio.h>
int main(){
	int *arr = NULL;
   	int size = ft_ultimate_range(&arr,-3, 4);
	for (int i = 0; i < size; i++)
	{
		printf("%d \n", arr[i]);
	}
	return (0);
}*/
