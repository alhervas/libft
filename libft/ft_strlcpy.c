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
	size_t	a;
	size_t	l;

	l = 0;
	while(src[l] != '\0')
		l++;
	if(size != 0)
	{
		a = 0;
		while(a < (size - 1) && a < l)
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (l);
}
/* int main(void)
{
    char src[]= "holaaaaaa";
    char dst[]="caracola";
   // printf("%lu\n", strlcpy(dst, src, 13));
    printf("%u\n", ft_strlcpy(dst, src, 13));
    return(0);
} */
