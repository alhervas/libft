/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:33:13 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/04 13:01:38 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_atoi(const char *nptr)
{
    int a;
    int sign;
    int result;

    a = 0;
    sign = 1;
    result = 0;
    while (nptr[a] == ' ' || nptr[a] == '\r' || nptr[a] == '\t' ||
        nptr[a] == '\n' || nptr[a] == '\v' || nptr[a] == '\f')
        a++;
    if (nptr[a] == '-')
        sign *= -1;
    if (nptr[a] == '-' || nptr[a] == '+')
        a++;
    while (nptr[a] >= '0' && nptr[a] <= '9')
    {
        result *= 10;
        result = result + (nptr[a] - '0');
        a++;
    }
    return(result * sign);
}