/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 13:43:20 by alejand3          #+#    #+#             */
/*   Updated: 2025/03/27 14:46:32 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char prueba[] = "hello there";
	printf("%i", ft_strlen);
	return (0);
}
*/

/*
int	main(void)
{
	ft_strlen("hello there");
	printf("%i", ft_strlen);
	return (0);
}
*/
