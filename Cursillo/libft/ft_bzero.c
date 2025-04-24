/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:09:16 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 16:09:18 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;
	
	i = 0;
	str = s; // Pasa de "void" a "char" 
	while (i < n)
	{
		str[i] = '0';
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	str[] = "Hello World";
	printf("%s\n", ft_bzero(str, 5));
	return (0);
}
*/
