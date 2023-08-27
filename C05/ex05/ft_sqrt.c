/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:09:52 by gacar             #+#    #+#             */
/*   Updated: 2023/07/26 12:15:12 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	long	i;
	long	temp;

	i = 0;
	temp = nb;
	if (temp == 0)
	{
		return (0);
	}
	else if (temp == 1)
	{
		return (1);
	}
	else if (temp > 1)
	{
		while (i * i <= temp)
		{
			if (i * i == temp)
			{
				return (i);
			}
			i++;
		}
	}
	return (0);
}
