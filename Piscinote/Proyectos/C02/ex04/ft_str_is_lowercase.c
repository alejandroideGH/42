/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:16:55 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/01 19:17:01 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	
	printf("%i\n", ft_str_is_lowercase(str1));
	printf("%i\n", ft_str_is_lowercase(str2));
	printf("%i\n", ft_str_is_lowercase(str3));
	printf("%i\n", ft_str_is_lowercase(str4));
	printf("%i\n", ft_str_is_lowercase(str5));
	printf("%i\n", ft_str_is_lowercase(str6));
	printf("%i\n", ft_str_is_lowercase(str7));
}
*/
