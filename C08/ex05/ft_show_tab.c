/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:41:26 by mkaraca           #+#    #+#             */
/*   Updated: 2023/08/03 07:55:52 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	ft_putnbr(int nb);
void	ft_putstr(char *str);

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr("");
		ft_putstr(par[i].copy);
		i++;
	}
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	c = '\n';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nb_char;

	if (nb == -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb_char = '0' + nb;
		write(1, &nb_char, 1);
	}
}
