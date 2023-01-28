/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:47:39 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/22 17:18:14 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_bzero(void *b, size_t len)
{
	size_t a;

	a = 0;
	while (len > a)
	{
		((unsigned char *)b)[a] = '0';
		a++;
	}
}
int	main(void)
{
	char cadena[] = "HOhaaehTAL";

	ft_bzero(cadena, 3);

	printf("%s", cadena);

	return (0);
}
