/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:45:04 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/17 14:51:56 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		j;
	unsigned int		i;

	j = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/*
#include <stdio.h>
int main(){
    char array1[] = "hello";
    char array2[] = "beautiful";
    char * t;
    t = ft_strncat(array1,array2,10);

    printf("%s \n",t);
    return 0;
}*/
