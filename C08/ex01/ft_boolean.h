/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gacar <gacar@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:41:33 by gacar             #+#    #+#             */
/*   Updated: 2023/07/30 14:41:34 by gacar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN(n) (n % 2 == 0)

typedef enum e_bool
{
	false = 0,
	true = 1
}	t_bool;
# define TRUE true
# define FALSE false
#endif
