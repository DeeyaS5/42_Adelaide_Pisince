/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:15:41 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/25 14:44:17 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int		index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
	char str1[] = "source";
	char str2[] = "dest";
	char* t = strcpy(str2, str1);
	printf("%s \n", t);
	//printf("%s \n", ft_strcpy(str2, str1));

	return 0;
}
