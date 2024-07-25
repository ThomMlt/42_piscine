/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 21:49:07 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/07 19:01:18 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>
int main()
{
	int a = 6;
	int b = 7;
	printf("la valeur de a est = %d, la valeur de b = %d\n", a, b);
	ft_swap(&a,&b);
	printf("la nouvelle valeur de a = %d et de b = %d", a, b);
}*/
