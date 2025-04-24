/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:35:17 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 13:35:18 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_isprint(int p)
{
	if (!(p >= 32) || !(p <= 126))
	{
		return (0);
	}
	else
	{
	return (1);
	}
}

/*
int	main(void)
{
	printf("%i\n", ft_isprint('6'));
	return (0);
}
*/
