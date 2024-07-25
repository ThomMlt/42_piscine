/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 23:48:29 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/07 19:03:17 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < (size / 2))
	{
		j = ((size - 1) - i);
		ft_swap(&tab[i], &tab[j]);
		i++;
	}
}

/*#include <stdio.h>
int main()
{
	int size;
	int tab[] = { 1, -2, 3, 4, 5};
	printf("%d %d %d %d %d est de taille 5\n", tab[0], tab[1], tab[2],
			tab[3],tab[4]);
	ft_rev_int_tab(tab, 5);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2],
                        tab[3],tab[4]);
}*/
