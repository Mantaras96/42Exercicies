/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:11:58 by amantara          #+#    #+#             */
/*   Updated: 2022/01/11 20:12:00 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int ft_isalpha (int c);
int ft_isdigit (int c);
int ft_isalnum (int c);
int ft_isascii (int c);
int ft_isprint (int c);
size_t ft_strlen (const char *s);
void *ft_memset(void *str, int c, size_t n);
size_t ft_strlcpy (char * restrict dst, const char * restrict src, size_t dstsize);
size_t ft_strlcat (char * restrict dst, const char * restrict src, size_t dstsize);
int ft_toupper (int c);
int ft_tolower (int c);

