/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:07:05 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 14:07:07 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// Rellena un espacio de memoria

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	
	i = 0;
	str = s; // Pasa de "void" a "char" 
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (str);
}


int	main(void)
{
	char	str[] = "Hello World";
	ft_memset(str, 'X', 5);
	printf("%s\n", str);
	return (0);
}

