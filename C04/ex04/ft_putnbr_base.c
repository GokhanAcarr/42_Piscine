/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:23:06 by gacar             #+#    #+#             */
/*   Updated: 2023/07/19 14:49:42 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		base_check(char *base);
int		duplicate_check(char *base, int size);
int		base_converter(long nbr, int base_size, char *result, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	char	result[32];
	int     base_size;
	long	long_nbr;

	long_nbr = nbr;
	if (base_check(base) == 0)
		return ;
	base_size = ft_strlen(base);
	if (long_nbr < 0)
	{
		write(1, "-", 1);
		long_nbr *= -1;
	}
	i = base_converter(long_nbr, base_size, result, base);
	while (i >= 0)
	{
		write(1, &result[i], 1);
		i--;
	}
}

int	base_converter(long nbr, int base_size, char *result, char *base)
{
	int	i;
	int	remainder;

	i = 0;
	if (nbr == 0)
	{
		result[0] = base[0];
		i = 1;
	}
	while (nbr != 0)
	{
		remainder = nbr % base_size;
		result[i] = base[remainder];
		nbr = nbr / base_size;
		i++;
	}
	i--;
	return (i);
}

int	base_check(char *base)
{
	int	i;
	int	base_size;

	if (base[0] == '\0')
		return (0);
	base_size = ft_strlen(base);
	if (base_size == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	if (duplicate_check(base, base_size) == 0)
		return (0);
	return (1);
}

int	duplicate_check(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
