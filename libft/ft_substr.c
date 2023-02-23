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
	size_t	i;
	size_t	j;
	size_t	len_s;

	len_s = (size_t)ft_strlen((char *)s);
	if (start >= len_s)
	{
		s2 = malloc(sizeof(char));
		*s2 = 0;
		return (s2);
	}
	if (len > len_s)
		len = len_s;
	s2 = malloc(len + 1);
	if (!s2 || !s)
		return (NULL);
	i = 0;
	j = start;
	while (s[j] && len > i && len_s > j)
		s2[i++] = s[j++];
	s2[i] = '\0';
	return (s2);
}
/* int main()
{
    printf("%s\n", ft_substr("Hol que tal", 3, 500));
} */