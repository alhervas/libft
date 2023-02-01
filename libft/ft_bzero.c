/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:47:39 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/30 11:58:25 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void ft_bzero(void *b, size_t len)
{
	size_t a;

	a = 0;
	while (len > a)
	{
		((char *)b)[a] = 0;
		a++;
	}
}
// int main()
// {
// 	char cadena[] = "HOhaaehTAL";

// 	ft_bzero(cadena, 3);
// 	printf("%s", cadena);
// }