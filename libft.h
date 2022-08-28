/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkulket <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:44:04 by tkulket           #+#    #+#             */
/*   Updated: 2022/08/29 00:38:22 by tkulket          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
unsigned int ft_strlcpy(char *dst, const char *src, unsigned int n);
int ft_strlen(const char *str);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
int ft_tolower(int c);
int ft_toupper(int c);

#endif
