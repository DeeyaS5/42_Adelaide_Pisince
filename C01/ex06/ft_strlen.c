/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:17:20 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/12 12:34:18 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		index;
	int		count;

	index = 0;
	count = 0;
	while (str[index])
	{
		count++;
		index++;
	}
	return (count);
}
/*
#include <stdio.h>
int main(){
	char str[] = "hello\n";
	printf("string length is %d",ft_strlen(str));
	return 0;
}*/
