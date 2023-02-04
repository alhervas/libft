/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:59:16 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/04 12:23:10 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t a;
    size_t b;

    a = 0;
    if(*needle == '\0' || needle == NULL)
        return((char *)haystack);
    while(a < len && haystack[a] != '\0')
    {
        b = 0;
        while(needle[b] == haystack[a + b] && a + b < len)
        {
            if(needle[b + 1] == '\0')
                return((char *)haystack + a);
            b++;
        }
        a++;
    }
    return (NULL);
}
/* int main()
{
    printf("%s\n", strnstr("abc", "abcdef", -1));
    printf("%s", ft_strnstr("abc", "abcdef", -1));
} */