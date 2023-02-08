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

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	unsigned int i2;

	i = 0;
    i2 = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
        while (i > i2)
		{
            f(i2, s);
            s++;
            i2++;
		}
	}
}