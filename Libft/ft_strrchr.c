/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/11 17:40:56 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
	char *str_copy;
	int i;
	int aux;

	str_copy = (char *)str;
	i = 0;
	aux = 0;
	while (str_copy[i])
	{
		if (str_copy[i] == c)
			aux = i;
		i++;
	}
	str_copy = (char *)str;
	while ( aux > 0)
	{
		str_copy++;
		aux--;
	}
	return str_copy;
}