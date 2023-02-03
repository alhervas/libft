/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:54:15 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/03 16:54:19 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t a;
    unsigned char *s1;
    unsigned char *s2;

    a = 0;
    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    while((s1 != '\0' && a < n)|| (s2 != '\0' && a < n))
    {
        if (s1[a] == '\0' && s2[a] == '\0')
            return(0);
        if (s1[a] > s2[a])
            return(1);
        else if (s1[a] < s2[a])
            return(-1);
        else
            a++;
    }
    return(0);
}
/* int main()
{
    printf("%d\n", strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
    printf("%d", ft_strncmp("atoms\0\0\0\0", "atoms\0abc", 8));
    return(0);
} */