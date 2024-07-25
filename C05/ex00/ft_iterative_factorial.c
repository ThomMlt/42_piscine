/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:50:59 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/11 16:58:42 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;
	int	current_value;

	fact = 1;
	current_value = 1;
	if (nb < 0)
		return (0);
	while (current_value <= nb)
	{
		fact = fact * current_value;
		current_value++;
	}
	return (fact);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_iterative_factorial(0));
}*/
