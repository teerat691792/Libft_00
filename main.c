/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <tkulket@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:02:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/18 15:47:55 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(void)
{
	int	c;

	c = 'M';
	printf("var = %c\n", c);
	printf("var = %d\n", c);
	printf("ft_built = %d\n", ft_isalpha(c));
	printf("alpha  = %d\n", isalpha(c));
	printf("lower = %d\n", islower(c));
	printf("upper = %d\n", isupper(c));
	printf("digit = %d\n", isdigit(c));
	return (0);
}
