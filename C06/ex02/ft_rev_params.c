/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:47:25 by gacar             #+#    #+#             */
/*   Updated: 2023/07/26 10:54:45 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;
	int	j;

	i = 1;
	j = argc - 1;
	if (argc > 1)
	{
		while (j >= i)
		{
			k = 0;
			while (argv[j][k] != '\0')
			{
				write(1, &argv[j][k], 1);
				k++;
			}
			write(1, "\n", 1);
			j--;
		}
	}
	return (0);
}
