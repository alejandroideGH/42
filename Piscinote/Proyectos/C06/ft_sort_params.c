/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lperalta <lperalta@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 19:59:46 by lperalta          #+#    #+#             */
/*   Updated: 2025/04/08 19:59:49 by lperalta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


int	ft_is_sorted(char *holi)
{
	int	i;
	
	i = 1;
	while (holi[i] != '\0')
	{
		if (holi[i] < holi[i-1])
		{
			return (1);
		}
		i++;
	}
	return (0);
}


void	bubblesort(char *holi2)
{
	int	j;
	char	swap;
	
	while (ft_is_sorted(holi2))
	{
		j = 1;
		while(holi2[j])
		{
			if (holi2[j-1]  > holi2[j])
			{
			swap = holi2[j-1];
			holi2[j-1] = holi2[j];
			holi2[j] = swap;
			}
			j++;
		}
	}
}
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while(argv[i])
	{
		j = 0;
		bubblesort(argv[i]);
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		i++;
		write (1,"\n", 1);
	}
	return (0);
}
