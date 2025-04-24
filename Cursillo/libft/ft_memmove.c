/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:28:10 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/23 11:28:15 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// En caso de que las memorias se solapen

void	*memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	const char	*s;

	i = 0;
	d = dest;
	s = src;
	while (i < n)
	{
		d[i] = s[i];
		i ++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	dest[10];
	char	src[] = "HelloWorld";
	
	printf("%s\n", ft_memcpy(destiny, source, 6));
	printf("%s\n", memcpy(destiny, source, 6));
}
*/
