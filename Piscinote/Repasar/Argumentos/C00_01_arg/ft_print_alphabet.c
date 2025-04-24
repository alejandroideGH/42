/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:24:53 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/09 16:24:58 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char c)
{
	while (c >= 'a' && c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
	}
	if (argv[1][1] != '\0')
	{
		write(1, "\n", 1);
	}
	else
	{
		ft_print_alphabet(argv[1][0]);
	}
}
