/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:23:06 by gacar             #+#    #+#             */
/*   Updated: 2023/07/19 14:49:42 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	base_check(char *base);
int	skip(char *str, int *index);
int	base_conv(char c, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	num;
	int	base_size;

	base_size = base_check(base);
	if (base_size < 2)
		return (0);
	i = 0;
	result = 0;
	sign = skip(str, &i);
	num = base_conv(str[i], base);
	while (num != -1)
	{
		result = (result * base_size) + num;
		i++;
		num = base_conv(str[i], base);
	}
	return (result * sign);
}

int	base_conv(char c, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (c == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	skip(char *str, int *index)
{
	int	i;
	int	sign;

	i = 0;
	while (str[i] <= 32 || str[i] == 127)
		i++;
	sign = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index = i;
	return (sign);
}

int	base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}
