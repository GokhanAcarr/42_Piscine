/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:10:49 by gacar             #+#    #+#             */
/*   Updated: 2023/07/24 21:05:56 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
	{
		return (2);
	}
	i = 2;
	if (nb < 2147483647)
	{
		while (i < nb)
		{
			if (nb % i == 0)
			{
				return (ft_find_next_prime(nb + 1));
			}
			i++;
		}
	}
	return (nb);
}
