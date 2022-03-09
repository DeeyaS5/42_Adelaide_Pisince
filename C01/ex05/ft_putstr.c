/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:38:45 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/12 12:15:41 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &(str[i]), 1);
		i++;
	}
}
/*
int main(){
	char strin[] = "hello\n";
	ft_putstr(strin);
	return 0;
}*/
