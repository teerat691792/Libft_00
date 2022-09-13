/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 07:22:44 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/14 05:49:13 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_insertchar(char *str, int n, size_t d)
{
	if (n == INT_MIN)
	{
		str[0] = '-';
		str[1] = '2';
		ft_insertchar(str, 147483648, d);
	}
	else if (n < 0)
	{
		str[0] = '-';
		ft_insertchar(str, n * -1, d);
	}
	else if (n == 0)
		str[0] = '0';
	else if (n > 9)
	{
		ft_insertchar(str, n / 10, d - 1);
		str[d - 1] = (n % 10) + '0';
	}
	else
		str[d - 1] = (n % 10) + '0';
	return (str);
}

size_t	ft_countdigit(int n)
{
	size_t	d;

	d = 0;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		n *= -1;
		d++;
	}
	while (n > 0)
	{
		n /= 10;
		d++;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	size_t	d;

	printf("\n");
	printf("n	=%d\n",n);
	d = ft_countdigit(n);
	tmp = malloc(sizeof(char) * (d + 1));
	tmp = ft_insertchar(tmp, n, d);
	printf("tmp	=%s\n",tmp);
	return (tmp);
}
/*
int	main(void)
{
	int n;
	char 	*s;
	n = 0;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));

	n = 1;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));

	n = -1;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));


	n = 42;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));


	n = 12345;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));


	n = -12345;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));

	n = INT_MAX;
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));
	n = INT_MIN;
	printf("n	=%d\n",n);
	s = ft_itoa(n);
	printf("result	=%s	size	=%lu\n" ,s,sizeof(s));
	return (0);

}
*/
