/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:11:10 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/30 12:59:35 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

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
// 	char cadena[] = "90ubqehrt";
// 	char hola[] = "ehjws";

// 	ft_memmove(hola, cadena, 32);
// 	printf("%s\n", hola);
// 	printf("%s", (char *)memmove(hola, cadena, 32));
// 	return (0);
// }
