/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:58:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/07 17:58:53 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *a;
    int b;
    int l;

    b = 0;
    a = NULL;
    l = ft_strlen((char *)s1);
    while(set[b] != '\0' || a == '\0')
    {
        a = ft_strchr((char *)s1, (int)set[b]);
        b++;
    }
    if (a != '\0')
    {
        while(l > 0 ||  a == '\0')
        {
            a = ft_strchr((char *)s1, (int)set[l]);
            l--;
        }
        return(a);
    }
    return(a);
}