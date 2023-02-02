/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:43:05 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/02 15:43:22 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
int ft_strlen2(char *dest)
{
    int a;
    
    a = 0;
    while(dest[a] != '\0')
        a++;
    return(a);
}
unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	l;
	unsigned int s;

	s = ft_strlen2(dest);
	l = ft_strlen2((char *)src);
	a = 0;
	if(s >= size)
	{
		if(size != 0)
		{
			while(a < (size - 1) && a < l)
			{
				dest[s + a] = src[a];
				a++;
			}
			dest[s + a] = '\0';
		}
		return (l + size);
	}
	return(0);
}
	
/* int main(void)
{
    char src[]= "emon";
    char dst[]="comenepess";
 	//printf("%lu\n", strlcat(dst, src, 15));
    printf("%u\n", ft_strlcat(dst, src, 15));
	printf("%s", dst);
    return(0);
} */

