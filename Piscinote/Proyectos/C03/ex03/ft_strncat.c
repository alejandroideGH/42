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

 #include <stdio.h>
 #include <string.h>

// Concatena strings hasta "n".

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[j] != '\0') && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}


int	main(void)
{
	char	destiny[9] = "Hola";
	char	source[] = "Mundo";
	
	//printf("%s\n", strncat(destiny, source, 3));
	printf("%s\n", ft_strncat(destiny, source, 3));
	return (0);
}

