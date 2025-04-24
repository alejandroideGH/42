/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:25:53 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/01 19:25:58 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	
	printf("%i\n", ft_str_is_uppercase(str1));
	printf("%i\n", ft_str_is_uppercase(str2));
	printf("%i\n", ft_str_is_uppercase(str3));
	printf("%i\n", ft_str_is_uppercase(str4));
	printf("%i\n", ft_str_is_uppercase(str5));
	printf("%i\n", ft_str_is_uppercase(str6));
	printf("%i\n", ft_str_is_uppercase(str7));
}
*/
