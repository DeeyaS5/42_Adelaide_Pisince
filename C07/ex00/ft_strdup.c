/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:19:20 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/26 17:15:47 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		size;
	char	*str;
	int		i;

	size = ft_strlen(src);
	str = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int main(){
	char *src = "hello";
	char * str = ft_strdup(src);
	printf("%s \n", str);
	return 0;
}
*/
