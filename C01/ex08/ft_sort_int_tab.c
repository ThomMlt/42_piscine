/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:28:48 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/07 18:59:39 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>
int main()
{
	int size;
	int tab[] = { 10, 6, 15, -2, 155};
	printf("%d %d %d %d %d est de taille 5\n", tab[0], tab[1], tab[2],
			tab[3],tab[4]);
	ft_sort_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2],
                        tab[3],tab[4]);
}*/
