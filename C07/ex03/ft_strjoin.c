/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshukla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:58:41 by dshukla           #+#    #+#             */
/*   Updated: 2022/01/30 16:12:47 by dshukla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		r;
	int		c;
	int		i;
	char	*res;
	int		len;

	r = 0;
	i = 0;
	len = 0;
	while (r < size)
		len += ft_strlen(strs[r++]) + ft_strlen(sep);
	res = malloc((len + 1) * sizeof(char));
	r = 0;
	while (r < size)
	{
		c = 0;
		while (strs[r][c])
			res[i++] = strs[r][c++];
		c = 0;
		while (sep[c] != '\0' && r < (size - 1))
			res[i++] = sep[c++];
		r++;
	}
	res[i] = '\0';
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	char **strs;
	char *sep;
	char *result;
	int	size = 3;

	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = malloc(sizeof(char) * 3 + 1);
	strs[1] = malloc(sizeof(char) * 7 + 1);
	strs[2] = malloc(sizeof(char) * 4 + 1);
	strs[0] = "hi,";
	strs[1] = "how are";
	strs[2] = "you?";

	sep = "";

	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);

	free(result);
}*/
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[10];
	char	sep[] = "";
	int	size;

	strs[0] = "abcdefg";
	strs[1] = "hijklmn";
	strs[2] = "opqrstuv";
	strs[3] = "wxyz";
	strs[4] = "this is the end";
	size = 5;
	printf("%s", ft_strjoin(size, strs, sep));
	return (0);
}*/
