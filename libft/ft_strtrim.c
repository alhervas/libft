/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 17:58:49 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/07 17:58:53 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int b;
	int l;
	char *result;

	b = 0;
	if(s1 == NULL || set == NULL)
		return(NULL);
	while (ft_strchr(set, s1[b]) && s1[b] != '\0')
		b++;
	l = ft_strlen((char *)s1) - 1;
	while(ft_strchr(set, s1[l])  && s1[l] != '\0')
		l--;
	result = ft_substr(s1, b, (l - b)+ 1);
	return(result);
}
