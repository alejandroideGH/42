/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejand3 <alejand3@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 12:20:23 by alejand3          #+#    #+#             */
/*   Updated: 2025/04/06 12:20:29 by alejand3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if(*to_find == '\0')
	{
		return(str);
	}
	else
	{
		while(str[i] != 0)
		{
			j = 0;
			while((str[i + j] == to_find[j]) && (to_find[j] != 0))
			{
				j++;
			}
			if(to_find[j] == '\0')
			{
				return (&str[i]);
			}
			i++;
		}
	}
	return (0);
}

int	main(void)
{
	printf("%s", ft_strstr("hola juan, como estas", "juan"));
	return (0);
}
