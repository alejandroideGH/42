/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:52:47 by alejand3          #+#    #+#             */
/*   Updated: 2025/03/26 14:34:42 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 6;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("División: %i\n", a);
	printf("Resto: %i", b);
	return (0);
}
*/
