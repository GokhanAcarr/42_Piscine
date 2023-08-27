/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:37:36 by gacar             #+#    #+#             */
/*   Updated: 2023/07/27 12:39:00 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*a;

	if (min >= max)
	{
		return (a = NULL);
	}
	range = max - min;
	a = (int *)malloc(range * sizeof(int) + 1);
	if (!a)
		return (0);
	i = 0;
	while (min < max)
	{
		a[i] = min ;
		min++;
		i++;
	}
	return (a);
}
