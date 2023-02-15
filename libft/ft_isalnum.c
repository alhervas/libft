/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 18:37:44 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/14 18:43:11 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	if ((a >= '0' && a <= '9')
		|| (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'))
		return (1);
	else
		return (0);
}
// int	main(void)
// {
// 	printf("%d", ft_isalnum('/'));
// }
