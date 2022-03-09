/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:26:53 by dshukla           #+#    #+#             */
/*   Updated: 2022/02/05 11:43:21 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		*range;
	int		i;
	int		temp;

	temp = min;
	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
	{
		return (0);
	}
	while (temp < max)
	{
		range[i] = temp;
		i++;
		temp++;
	}
	return (range);
}
/*
#include <stdio.h>
int main(){
	int i = 0;
	int min = 0;
	int max = 7;
	int * arr = ft_range(min, max);
	while ( i < (max - min))
	{
		printf("%d \n", arr[i]);
		i++;
	}
	return (0);
}*/
