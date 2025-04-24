/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:48:36 by alejand3          #+#    #+#             */
/*   Updated: 2025/03/31 18:18:38 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	d1;
	char	u1;
	char	d2;
	char	u2;

	d1 = '0';
	u1 = '0';
	d2 = '0';
	u2 = '0';
	
	while(d1 <= '9')
	{
		u1 = '0';
		while(u1 <= '9')
		{	
			d2 = '0';
			while(d2 <= '9')
			{	
				u2 = '0';
				while(u2 <= '9')
				{
					write(1, &d1, 1);
					write(1, &u1, 1);
					write(1, " ", 1);
					write(1, &d2, 1);
					write(1, &u2, 1);
					write(1, ", ", 2);
					u2++;
				}
				d2++;
			}
		u1++;
		u2 = u1 + 1;
		d2 = d1;	
		}
	d1++;
	}
}

int	 main(void)
{
	ft_print_comb2();
}
