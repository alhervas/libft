/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:19:46 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/30 14:43:44 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t a;
	char *d;
	const char *s;
	
	d = (char *)dest;
	s = (char *)src;
	a = 0;
	while (dest == src || !n)
		return(dest);
	while (n > a)
	{
		d[a] = s[a];
		a++;
	}
	return(d);
}
int	main(void)
{
	char src[] = "hola";
	char dest[] = "adidioso";

	// memcpy(dest, src, 3);
	// printf("%s\n", dest);
	ft_memcpy(dest, src, 3);
	printf("%s", dest);
	return (0);
} 