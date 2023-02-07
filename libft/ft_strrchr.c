/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:24:26 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/02 20:24:29 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	int a;

	a = ft_strlen((char *)str);
	while (a >= 0)
	{
		if (str[a] == (char)c)
		{
			return((char *)&str[a]);
		}
		a--;
	}

    return(0);
}
/* int	main()
{
	printf("%s\n", strrchr("BBRUMBRZUBM", 'B'));
	printf("%s", ft_strrchr("BBRUMBRZUBM", 'B'));
} */
