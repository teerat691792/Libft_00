/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:22:44 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/08 04:40:57 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_itoa(int n)
{
	char		*tmp;
	size_t 	i;
	int		result;

	result = n;
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	tmp = malloc(sizeof(char) * (i + 1));
	tmp[i + 1] = '\0';
	while (i > 0)
	{
		tmp[i] = (result % 10) + '0';
		result = result / 10;
		--i;
	}

	

	return ((char *)tmp);
}

/*
static size_t	digit_needed(long long n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n = -n;
	}
	while (n > 0)
	{
		digit++;
		n /= 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*ans;
	size_t		dg;
	long long	nb;

	nb = n;
	dg = digit_needed(nb);
	ans = malloc((dg + 1) * sizeof(char));
	if (!ans)
		return (NULL);
	if (nb < 0)
	{
		ans[0] = '-';
		nb = -nb;
	}
	ans[dg] = '\0';
	dg--;
	while (1)
	{
		ans[dg] = (nb % 10) + '0';
		nb /= 10;
		dg--;
		if (nb == 0)
			return (ans);
	}
	return (ans);
}
*/

int	main(void)
{
	int n;
	char 	*s;

	n = 12345;
	s = ft_itoa(n);
	printf("%s \n",s);

	return (0);
}
