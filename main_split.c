/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:44:22 by tkulket           #+#    #+#             */
/*   Updated: 2022/09/15 17:53:29 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c);

int	main(int argc, char **argv)
{
	char	c;
	char	*str = NULL;
	char	**split = NULL;
	int		i = 0;

	if (argc == 3)
	{
		c = argv[2][0];
		str = argv[1];
		split = ft_split(str, c);
		while (split[i])
		{
			printf("%s\n", split[i]);
			i++;
		}
		i = 0;
		while (split[i])
		{
			free(split[i]);
			i++;
		}
		free(split);
	}
	return (0);
}
