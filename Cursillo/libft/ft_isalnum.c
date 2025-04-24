/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:58:52 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/22 11:58:54 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) == 1 || ft_isalpha(c) == 1)
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
	printf("%i\n", ft_isalnum('5'));
	return (0);
}
*/
