/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:06:54 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/10 19:06:56 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign_count;
	int	result;
	
	i = 0;
	result = 0;
	sign_count = 1;
	while ((str[i] == ' ' || str[i] == '-' || str[i] == '+')
		|| (str[i] >= 9 && <= 13))
	{
		if (str[i] == '-')
		{
			sign_count = sign_count * - 1;
		}
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && (str[i] != '\0'))
	{
		result = result * 10
		result = result + (result - '0')
		i++;
	}
	result = result * sign_count;
}

int	main(int argc, char **argv)
{
	ft_atoi(argv[1])
	{
		
	}
}
