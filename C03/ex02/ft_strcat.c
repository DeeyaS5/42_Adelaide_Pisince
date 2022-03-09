/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:35:35 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/17 11:43:56 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(){
    char array1[] = "this is source";
    char array2[] = " this is destination";
    char * t;
    t = ft_strcat(array1,array2);

    printf("%s \n",t);
    return 0;
}*/
