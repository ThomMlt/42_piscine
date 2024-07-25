/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 11:49:21 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/07 19:25:09 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>
int main()
{
	char dest[] = "bonjour a tous";
	char src[] = "salut";
	printf("dest = %s\n src = %s\n", dest, src);
	ft_strcpy(dest, src);
	printf("dest = %s\n", dest);
}*/
