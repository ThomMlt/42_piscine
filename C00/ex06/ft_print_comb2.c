/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 21:52:23 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/03 22:39:15 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_cal_write(int c)
{
	char	a;

	a = (c / 10) + '0';
	write(1, &a, 1);
	a = (c % 10) + '0';
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_cal_write(a);
			write(1, " ", 1);
			ft_cal_write(b);
			if (a != 98 || b != 99)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*int main()
{
	ft_print_comb2();
	return (0);
}*/
