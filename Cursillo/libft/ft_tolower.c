/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:00:25 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/23 18:00:27 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

/*
int	main(void)
{
	int c = 'A';
	
	printf("%c\n", ft_tolower(c));
	printf("%c\n", tolower(c));
	return (0);
}
*/
