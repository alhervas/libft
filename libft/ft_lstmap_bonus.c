/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:06:57 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/20 20:06:59 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list aux;

	aux = ft_lstiteri(lst, f);
	return (aux);
}
