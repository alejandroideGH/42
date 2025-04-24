/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:06:13 by alejand3          #+#    #+#             */
/*   Updated: 2025/03/29 20:47:47 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// strcpy (copia todo)

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	source[] = "making bacon pancakes";
	char	destiny[8000];
	
	ft_strcpy(destiny, source);
	printf("%s\n", destiny);
}
*/
