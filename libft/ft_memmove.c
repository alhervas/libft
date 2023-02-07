/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:11:10 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/04 11:44:56 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	char *d;
	char *s;


	d = (char *)dest;
	s = (char *)src;
	if(d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if(d > s)
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return(dest);
}
// int	main(void)
// {
// 	char dest[] = "holaaaaa";
// 	char src[] = "que tal";

// 	// memmove(dest, src, 5);
// 	// printf("%s\n", dest);
// 	ft_memmove(dest, src, 5);
// 	printf("%s", dest);
// 	return (0);
// } 