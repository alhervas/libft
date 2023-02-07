/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:23:19 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/05 21:34:29 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memcpy1(void *dest, const void *src, size_t n)
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
int	ft_strlen1(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}
char *ft_strdup(const char *s)
{
    char *s1;
    char *s2;

    s1 = (char *)s;
    if(!(s2 = (char *)malloc(ft_strlen1(s1) + 1)))
        return(0);
    ft_memcpy1(s2, s1, ft_strlen1(s1) + 1);
    return(s2);
}
/* int main()
{
    printf("%s\n", ft_strdup("Hol que tal"));
} */
