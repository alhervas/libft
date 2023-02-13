/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 13:51:46 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:16:36 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		a;
	int		b;

	a = 0;
	b = 0;
	s = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!s)
		return (0);
	while (s1[a])
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		s[a] = s2[b];
		b++;
		a++;
	}
	s[a] = '\0';
	return (s);
}
/* int main()
{
    printf("%s", ft_strjoin("hola", " que tal"));
} */