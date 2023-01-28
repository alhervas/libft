/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:44:42 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/21 17:47:15 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void *ft_memset(void *b, int c, size_t len)
{
	size_t a;

	a = 0;
	while (len > a)
	{
		((unsigned char *)b)[a] = c;
		a++;
	}
	return (b);
}
int	main(void)
{
	char cadena[] = "HOLAQUETAL";

	ft_memset(cadena, 'a', 3);

	printf("%s", cadena);

	return (0);
}
