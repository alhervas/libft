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

#include "libft.h"

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	a;
	size_t  j;
 	
	dest_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	j = dest_len;
	/*if(dest_len == 0 || size == 0)
		return(src_len);*/
	if(size <= dest_len)
		return(size + src_len);
	a = 0;
	while(src[a] && size > j + 1)
	{
		dest[j] = src[a];
		a++;
		j++;
	}
	dest[dest_len + a] = '\0';
	return(src_len + dest_len);
}
/* int main(void)
{
    char src[]= "the cake is a lie !\0I'm hidden lol\r\n";
    char dst[]="there is no stars in the sky";
 	printf("%lu\n", strlcat(dst, src, strlen(src) + 4));
   // printf("%u\n", ft_strlcat(dst, src, strlen(src) + 4));
	printf("%s", dst);
    return(0);
}  */
