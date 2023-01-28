/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 18:29:07 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/22 19:00:54 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		a;
	size_t	c;

	a = 0;
	c = 0;
	while (src[a] != '\0' && c <= size)
	{
		dest[a] = src[a];
		c++;
		a++;
	}
	while (size <= c)
	{
		dest[a] = '\0';
		c++;
		a++;
	}
	return (c);
}
// int main()
// {
// 	printf("%lu\n", strlcpy("hola tengo", " un movil", 3));
// 	printf("%u", ft_strlcpy("hola tengo", " un movil", 3));
// 	return (0);
// }
