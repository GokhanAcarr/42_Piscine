/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:10:49 by gacar             #+#    #+#             */
/*   Updated: 2023/07/27 12:53:52 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	len;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	len = max - min;
	range[0] = (int *)malloc(len * sizeof(int) + 1);
	if (!*range)
		return (-1);
	while (min < max)
	{
		range[0][i] = min ;
		min++;
		i++;
	}
	return (len);
}
