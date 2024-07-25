/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:19:22 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/17 17:48:23 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	length_dest;

	i = 0;
	length_dest = 0;
	while (dest[length_dest] != '\0')
	{
		length_dest++;
	}
	while (src[i] != '\0')
	{
		dest[length_dest + i] = src[i];
		i++;
	}
	dest[length_dest + i] = '\0';
	return (dest);
}

int	ft_len_strs(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab_dest;
	int		i;
	int		size_strs;
	int		size_sep;

	i = 0;
	size_strs = ft_len_strs(strs, size);
	size_sep = ft_strlen(sep);
	tab_dest = malloc(sizeof(char) * (size_strs + (size_sep * (size - 1))));
	if (size == 0 || tab_dest == 0)
	{
		tab_dest = NULL;
		return (tab_dest);
	}
	tab_dest[0] = 0;
	while (i < size)
	{
		ft_strcat(tab_dest, strs[i]);
		i++;
		if (i < size)
			ft_strcat(tab_dest, sep);
	}
	return (tab_dest);
}

/*int main()
{
	char **strs = malloc(sizeof(char *) * 3);
	strs[0] = "hello";
	strs[1] = "world";
	strs[2] = "bonjour";
	char sep[] = ", ";
	char *dest;
	dest = ft_strjoin(3, strs, sep);
	printf("%s", dest);
	free(dest);
	return (0);
}*/
