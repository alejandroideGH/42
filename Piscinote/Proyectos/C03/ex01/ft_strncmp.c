/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:21:57 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/09 17:12:43 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// Resta diferencia entre primera diferencia dentro de "n".

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && s1[i] && s2[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	if ((i == n) || (s1[i] == s2[i]))
	{
		return (0);
	}
	return (s1[i] - s2[i]);
}


int	main(void)
{
	char	string1[] = "hola que haces";
	char	string2[] = "hola que tal";
	int	num = 10;

	printf("%d\n", strncmp(string1, string2, num));
	printf("%d\n", ft_strncmp(string1, string2, num));
	return (0);
}

