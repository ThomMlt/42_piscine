/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmillot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:04:58 by tmillot           #+#    #+#             */
/*   Updated: 2024/07/10 14:53:41 by tmillot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && (s1[i] == s2[i]) && (i < n -1))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == *to_find)
		{
			if (ft_strncmp(&str[i], to_find, ft_len(to_find)) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int main()
{
	char str[100] = "bonjour a tous fwfwjjjjje suis le nouveau directeur";
	char to_find[] = "je";
	printf("%s", ft_strstr(str, to_find));
}*/
