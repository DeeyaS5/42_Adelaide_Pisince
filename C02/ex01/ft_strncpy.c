/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 10:00:59 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/24 12:21:59 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		index;

	index = 0;
	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(){
	char str1[12] = "source";
	char str2[12] = "";
	unsigned int numb = 3;
	ft_strncpy(str2, str1, numb);
   	printf("%s \n", str2);
	return 0;
}*/
