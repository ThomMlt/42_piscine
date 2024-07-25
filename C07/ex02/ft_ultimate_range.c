/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:54:25 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/16 18:11:04 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	diff = max - min;
	*range = malloc(sizeof(int) * diff);
	if (*range == NULL)
		return (-1);
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	int *range;
	int i = 0;
	int a = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	
	printf("la taille de range est :%d\n", a);
	while (i < atoi(argv[2]) - atoi(argv[1]))
	{
		printf("%d\t", range[i]);
		i++;
	}
}*/
