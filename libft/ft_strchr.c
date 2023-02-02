/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:12:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/22 20:22:19 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<string.h>

char *ft_strchr(const char *str, int c)
{
	int a;
	int b;
	char aux;

	b = 0;
	aux = c;
	a = 0;
	while ((char)str[a] != '\0')
	{
		if (((char *)str)[a] == aux)
		{
			while (((char *)str)[a] != '\0')
			{
				 return((char *)&str[a]);
			}
		}
		a++;
	}
	if(aux == '\0')
		 return((char *)&str[a]);
    return(NULL);
}
/* int	main()
{
	printf("%s\n", strchr("dthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0'));
	printf("%s", ft_strchr("gthere is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0", '\0'));
} */
