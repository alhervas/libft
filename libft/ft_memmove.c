/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:11:10 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/22 18:25:30 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void *ft_memmove(void *dest, const void *src, size_t len)
{
	size_t a;
	unsigned char *temp;

	a = 0;
	temp = (unsigned char *)src;
	while (a < len)
	{
		((unsigned char *)dest)[a] = temp[a];
		a++;
	}
	return (0);
}
// int	main(void)
// {
// 	char cadena[] = "HOLAQUETAL";
// 	char hola[] = "";

// 	ft_memmove(hola, cadena, 3);
// 	printf("%s", hola);
// 	return (0);
// }
