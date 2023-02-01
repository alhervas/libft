/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:17:23 by alhervas          #+#    #+#             */
/*   Updated: 2023/01/30 11:52:33 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return(0);
}
/*int	main()
{
char cadena[] = ";0ñsáR(h&~?RÛ1/";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      printf("%c, %d\n", cadena[i], ft_isascii(cadena[i]));

   return 0;
}*/
