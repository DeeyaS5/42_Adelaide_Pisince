/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:49:44 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/20 11:52:25 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		index++;
	}
	return (index);
}
/*
#include <stdio.h>
int main(){
	char str[] = "hello\n";
	printf("string length is %d",ft_strlen(str));
	return 0;
}*/
