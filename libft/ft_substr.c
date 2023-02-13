/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:37:41 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:17:07 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	a;
	size_t	p;
	size_t	len1;

	len1 = (size_t)ft_strlen((char *)s);
	if (start >= len1)
	{
		s2 = malloc(sizeof(char));
		*s2 = 0;
		return (s2);
	}
	if (len > len1)
		len = len1;
	s2 = malloc(len + 1);
	if (!s2 || !s)
		return (NULL);
	a = 0;
	p = start;
	while (s[p] && len > a && len1 > p)
		s2[a++] = s[p++];
	s2[a] = '\0';
	return (s2);
}
/* int main()
{
    printf("%s\n", ft_substr("Hol que tal", 3, 500));
} */