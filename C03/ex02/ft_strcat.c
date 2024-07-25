/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:20:27 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/09 22:33:30 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <stdio.h>
int main()
{
	char dest[100] = "bonjour a";
	char src[] = " tous je suis le directeur";
	printf("%s", ft_strcat(dest, src));
}*/
