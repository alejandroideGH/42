/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:30:22 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 16:30:25 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Copia espacio de memoria

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;

	i = 0;
	d = dest; // ???
	s = src;
	while (i < n) // No se usa '/0' ya que solo recorre la posición de memoria
	{
		d[i] = s[i];
		i ++;
	}
	return (dest); // ???
}

/*
int	main(void)
{
	char	source[] = "making bacon pancakes";
	char	destiny[8000];
	
	printf("%s\n", ft_memcpy(destiny, source, 6));
	printf("%s\n", memcpy(destiny, source, 6));
}
*/
