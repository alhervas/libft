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

char *ft_strchr(const char *str, int c)
{
	int a;
	int b;
	char *temp;

	b = 0;
	temp = (char *)str;
	a = 0;
	while (str != '\0')
	{
		if (((int *)str)[a] == c)
		{
			while (str != '\0')
			{
				((char *)temp)[a] = ((char *)str)[b];
				a++;
				b++;
			}
			break;
		}
		a++;
	}
	return ((char *)str);
}
// int	main()
// {
// 	printf("%s", strchr("PEROBUENO", 'R'));
// }
