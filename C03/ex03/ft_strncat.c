/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 22:35:26 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/10 08:38:51 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	lenght_dest;
	unsigned int	i;

	i = 0;
	lenght_dest = 0;
	while (dest[lenght_dest] != '\0')
	{
		lenght_dest++;
	}
	while ((src[i] != '\0') && (i < nb))
	{
		dest[lenght_dest + i] = src[i];
		i++;
	}
	dest[lenght_dest + i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char dest[100] = "Bonjour a tous";
	char src[] = "je suis le nouveau directeur financier";
	printf("%s", ft_strncat(dest, src, 28));
}*/
