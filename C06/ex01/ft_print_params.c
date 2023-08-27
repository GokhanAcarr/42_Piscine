/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:40:12 by gacar             #+#    #+#             */
/*   Updated: 2023/07/26 10:46:17 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			k = 0;
			while (argv[i][k] != '\0')
			{
				write(1, &argv[i][k], 1);
				k++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
