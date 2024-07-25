/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 22:14:51 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/04 22:41:56 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>
int main()
{
	int a = 25;
	int b = 10;
	int div = 0;
	int mod = 0;
	printf("valeur de a = %d valeur de b %d\n", a, b);
	printf("valeur de div = %d valeur mod = %d\n", div, mod);
	ft_div_mod(a ,b , &div, &mod);
        printf("la nouvelle valeur de div = %d valeur mod = %d\n", div, mod);
}*/
