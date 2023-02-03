/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:59:16 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/03 18:59:18 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t a;
    size_t b;
    unsigned char *s1;
    unsigned char *s2;

    a = 0;
    s1 = (unsigned char *)haystack;
    s2 = (unsigned char *)needle;
    if(s2[a] == '\0')
        return((char *)&s1[a]);
    while(len != 0)
    {
        b = 0;
        if (s1[a] == s2[b])
        {
            while(s2[b] != '\0' && len != 0)
            {
                if(s1[a + b] == s2[b])
                {
                    b++;
                    len--;
                }
                else
                    break;
            }
            if (s2[b] == '\0')
                return((char *)&s1[a]);
        }
        a++;
        len = (len + b) - 1;
    }
    return (NULL);
}
int main()
{
    printf("%s\n", strnstr("abc", "abcdef", -1));
    printf("%s", ft_strnstr("abc", "abcdef", -1));
}