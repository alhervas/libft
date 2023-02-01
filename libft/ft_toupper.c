/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 13:31:57 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/30 11:51:34 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	return (a);
}
// int	main()
// {
// 	printf("%c", ft_toupper('a'));
// }