/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:51:58 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/16 15:48:13 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (NULL);
	while (i < (max - min))
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	int i = 0;
	int *tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while(i < (atoi(argv[2]) - atoi(argv[1])))
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
