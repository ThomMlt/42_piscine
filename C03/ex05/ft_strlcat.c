/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:14:10 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/10 16:56:57 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lenght_dest;
	unsigned int	lenght_src;
	unsigned int	i;
	unsigned int	result;

	i = 0;
	result = 0;
	lenght_src = ft_len(src);
	lenght_dest = ft_len(dest);
	if (size > lenght_dest)
		result = (lenght_src + lenght_dest);
	else
		result = (lenght_src + size);
	while ((src[i] != '\0') && (i < size))
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (result);
}

/*#include <stdio.h>
int main()
{
	char dest[100] = "Bonjour a tous";
	char src[] = "je suis le directeur";
	printf("%d", ft_strlcat(dest,src, 5));
}*/
