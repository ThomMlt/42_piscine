/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:46:17 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/04 22:54:47 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

/*#include <stdio.h>
int main()
{
	int a = 25;
	int b = 10;
	printf("a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a,&b);
	printf("nouvelle valeur de a = %d, b = %d\n", a, b);
}*/
