/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 14:34:10 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/03 14:34:13 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

// Concatena strings.

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	j = 0;
	temp = dest;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (temp);
}

/*
int	main(void)
{
	char	destiny[10] = "Hola";
	char	source[] = "Mundo";
	
	printf("%s\n", strcat(destiny, source));
	printf("%s\n", ft_strcat(destiny, source));
	return (0);
}
*/
