/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:31:57 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/21 14:02:32 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	return (a);
}
// int	main()
// {
// 	printf("%c", ft_toupper('a'));
// }