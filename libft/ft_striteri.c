/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 18:48:55 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/08 18:48:57 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    char *s1;

    s1 = malloc(ft_strlen((char *)s) + 1);
    i = 0;
    while(s[i] != '\0')
    {
        s1[i] = f(i, s);
        i++;
    }
    s1[i] = '\0';
} */