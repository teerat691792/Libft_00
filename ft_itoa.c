/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:22:44 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/11 18:29:56 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countdigits(int	n)
{
	size_t	d;

	d = 0;
	if (n < 0)
	{
		d++;
		n = n * -1;
	}
		
	while (n > 0)
	{
		n = n / 10;
		d++;
	}
	return(d);
}

char	*ft_itoa(int n)
{
	size_t	d;
	size_t	i;
	int		nb;
	char	*tmp;

	nb = n;
	if (nb == INT_MIN)
		return ("-2147483648");
	else if (n == 0)
	{		
		tmp = malloc(sizeof(char) * 2);	
		*tmp = '0';
		return (tmp);
	}
	d = ft_countdigits(nb);
	tmp = malloc(sizeof(char) * d + 1);
	i = d;
	if (n < 0)
	{
		n = n * -1;
		d++;
	}
		
	while (i--)
	{
		tmp[i] = (n % 10) + '0';
		n = n / 10 ;
	}
	if (nb < 0)
		tmp[0] = '-';
	tmp[i] = '\0';
	return (tmp);
}

/*
int	main(void)
{
	int n;
	char 	*s;

	n = 12345;
	s = ft_itoa(n);
	printf("%s\n",s);

	n = -12345;
	s = ft_itoa(n);
	printf("%s\n",s);


	return (0);
}
*/
