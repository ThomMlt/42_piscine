/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:58:04 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/03 20:32:27 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
		write(1, "P", 1);
}

/*int main()
{
	ft_is_negative(-122);
	ft_is_negative(-52);
	ft_is_negative(0);
	ft_is_negative(56);
	ft_is_negative(-2);
	return (0);
}*/
