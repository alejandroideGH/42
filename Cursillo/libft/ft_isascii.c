/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:14:23 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 16:14:27 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*
int	main(void)
{
	printf("%i\n", ft_isascii('6'));
}
*/
