/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 13:02:15 by alejand3          #+#    #+#             */
/*   Updated: 2025/03/25 21:19:54 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while(c <= '7')
	{
		d = c + 1;
		while(d <= '8')
		{
			u = d + 1;
			while(u <= '9')
			{
				write(1, &c, 1);
				write(1, &d, 1);
				write(1, &u, 1);
				if (c < '7')
				{
					write(1, ", ", 2);	
				}
				else
				{
					write(1, "\n", 1);
				}
				u++;
			}
			d++;
			
		}
		c++;
	}
	
}

int	main(void)

{
	ft_print_comb();
	return (0);
}
