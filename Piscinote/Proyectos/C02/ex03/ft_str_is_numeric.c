/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:59:40 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/01 18:59:55 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "1234";
	char	str3[] = "hola k ase";
	char	str4[] = "";
	char	str5[] = "Holis";
	char	str6[] = "HOLI";
	char	str7[] = "¥";
	char	str8[] = "se7en";
	
	printf("%i\n", ft_str_is_numeric(str1));
	printf("%i\n", ft_str_is_numeric(str2));
	printf("%i\n", ft_str_is_numeric(str3));
	printf("%i\n", ft_str_is_numeric(str4));
	printf("%i\n", ft_str_is_numeric(str5));
	printf("%i\n", ft_str_is_numeric(str6));
	printf("%i\n", ft_str_is_numeric(str7));
	printf("%i\n", ft_str_is_numeric(str8));
}
*/
