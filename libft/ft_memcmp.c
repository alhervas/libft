/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 18:43:54 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:15:19 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t a;
	unsigned char *p1;
	unsigned char *p2;

	a = 0;
	p1 = (unsigned char *)ptr1;
	p2 = (unsigned char *)ptr2;
	while (num != 0)
	{
		if (p1[a] == p2[a])
		{
			a++;
			num--;
		}
		else
			return (p1[a] - p2[a]);
	}
	return (0);
}