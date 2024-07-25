/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 13:59:52 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/08 14:18:55 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] < 127))
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>
int main()
{
	printf("%d", ft_str_is_printable("fkhwvbfhvw1j45454'%"));
}*/
