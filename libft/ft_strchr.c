/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:12:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:16:07 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		a;
	char	aux;

	aux = c;
	a = 0;
	while ((char)str[a] != '\0')
	{
		if (((char *)str)[a] == aux)
		{
			return ((char *)&str[a]);
		}
		a++;
	}
	if (aux == '\0')
		return ((char *)&str[a]);
	return (NULL);
}
/* int	main(void)
{
	printf("%s\n",
			strchr("dthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0",
				'h'));
	printf("%s",
			ft_strchr("gthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0",
				'h'));
}  */