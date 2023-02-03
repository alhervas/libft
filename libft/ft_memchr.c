/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 17:17:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/03 17:18:01 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void *ft_memchr(const void *str, int c, size_t n)
{
	size_t a;
	int b;
	unsigned char aux;

	b = 0;
	aux = c;
	a = 0;
	while (a != n)
	{
		if (((unsigned char *)str)[a] == aux)
		{
			return((void *)&str[a]);
		}
		a++;
	}
	return(NULL);
}
/* int	main()
{
	//printf("%s\n", memchr("dthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0', 15));
	printf("%s", ft_memchr("gthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0', 15));
} */