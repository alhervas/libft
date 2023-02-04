/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:19:46 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/04 11:45:16 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t a;
	char *d;
	const char *s;
	
	d = (char *)dest;
	s = (char *)src;
	a = 0;
	if (dest == src || !n)
		return(dest);
	while (n > a)
	{
		d[a] = s[a];
		a++;
	}
	return(d);
}
// int	main(void)
// {
// 	char dest[100] = "holaaaaa";
// 	char src[10] = "que tal";

// 	memcpy(dest, src, 10);
// 	printf("%s\n", dest);
// 	// ft_memcpy(dest + 8, src, 10);
// 	// printf("%s", dest);
// 	return (0);
// } 