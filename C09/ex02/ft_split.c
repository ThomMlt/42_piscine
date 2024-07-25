/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:20:14 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/24 13:35:33 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_nbr_strs(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		while (str[i] != 0 && is_charset(str[i], charset) == 1)
			i++;
		if (str[i] != 0 && is_charset(str[i], charset) == 0)
		{
			while (str[i] != 0 && is_charset(str[i], charset) == 0)
				i++;
			count++;
		}
	}
	return (count);
}

char	*copy_str(char *str, int start, int end)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (end - start) + 1);
	if (!dest)
		return (NULL);
	while (start < end)
	{
		dest[i] = str[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		start;
	int		end;
	int		i;
	int		y;

	i = 0;
	y = 0;
	dest = malloc(sizeof(char *) * count_nbr_strs(str, charset) + 1);
	if (!(dest))
		return (NULL);
	while (str[i] != 0)
	{
		while (is_charset(str[i], charset) == 1)
			i++;
		start = i;
		while (str[i] != 0 && is_charset(str[i], charset) == 0)
			i++;
		end = i;
		if (end > start)
			dest[y++] = copy_str(str, start, end);
	}
	dest[y] = NULL;
	return (dest);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	char **dest;
	dest = ft_split(argv[1], argv[2]);
	int i = 0;
	while (dest[i] != NULL)
	{
		printf("%s\n", dest[i]);
		i++;
	}
	free(dest);
}*/
