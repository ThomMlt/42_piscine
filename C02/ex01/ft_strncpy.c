/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:43:18 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/08 23:49:32 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char dest[] = "Bonjour a tous";
	char src[] = "Salutt";
	printf("dest = %s\n src = %s\n", dest, src);
	unsigned int n = 3;
	printf("dest =%s", ft_strncpy(dest, src, n));
}*/
