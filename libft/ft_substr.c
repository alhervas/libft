/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:37:41 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/05 22:14:32 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s1;
    char *s2;
    size_t a;
    size_t p;

    s1 = (char *)s;
    if (!s || !(s2 = /* (char *) */malloc(len) + 1))
        return(0);
    a = 0;
    p = start;
    while(len > a && strlen(s1) > p)
    {
        s2[a] = s1[start];
        a++;
        p++;
    }
    s2[a] = '\0';
    return(s2);
}
/* int main()
{
    printf("%s\n", ft_substr("Hol que tal", 3, 5));
} */