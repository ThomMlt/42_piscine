/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 20:49:54 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/09 22:12:03 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n -1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int main()
{
	printf("%d", ft_strncmp("Hello", "Hell", 4));
}*/
