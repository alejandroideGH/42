/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:34:27 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/23 17:34:29 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	*ft_toupper(int c)
{
	int	i;

	i = 0;
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}


int	main(void)
{
	int c = 'a';
	
	printf("%c\n", ft_toupper(c));
	printf("%c\n", toupper(c));
	return (0);
}

