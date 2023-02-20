/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:30:59 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/20 15:31:01 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"
 t_list *ft_lstnew(void *content)
 {
	t_list *hola;

	hola = malloc(sizeof(t_list));
	if(!(hola))
		return(NULL);
	hola->content = content;
	hola->next = NULL;
	return(hola);
 }
