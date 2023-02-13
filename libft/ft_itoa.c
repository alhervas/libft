/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhervas <alhervas@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:00:38 by alhervas          #+#    #+#             */
/*   Updated: 2023/02/13 20:21:34 by alhervas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	digits(int n)
{
	int	c;
	int	numb;

	c = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		c++;
	}
	numb = n;
	while (numb > 0)
	{
		numb /= 10;
		c++;
	}
	return (c);
}

int	expon(int n)
{
	int	c;
	int	numb;

	c = 1;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (1000000000);
	if (n < 0)
	{
		n *= -1;
	}
	numb = n;
	while (numb > 9)
	{
		numb /= 10;
		c *= 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	int			a;
	char		*result;
	int			exp;
	long int	z;

	a = 0;
	z = (long int)n;
	exp = expon(n);
	result = malloc(digits(n) + 1);
	if (!result)
		return (0);
	if (n < 0)
	{
		result[a] = '-';
		z *= -1;
		a++;
	}
	n = 0;
	while (exp > 0)
	{
		result[a] = ((z / exp) - n) + 48;
		n = (z / exp) * 10;
		exp /= 10;
		a++;
	}
	result[a] = '\0';
	return (result);
}
/* int main()
{
    printf("%s\n", ft_itoa(-2147483648));
} */