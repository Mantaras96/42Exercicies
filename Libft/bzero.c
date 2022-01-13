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
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

 void ft_bzero(void *s, size_t n)
{
	unsigned char *str_copy;
	int i;

	i = n;
	str_copy = (unsigned char *) s;
	while (str_copy[i])
	{
		str_copy[i] = '\0';
	}
}

int main() {
	
	char str[] = "www.tutorialspoint.com";
	int n = 3;

	ft_bzero(str, n);
	printf("%s \n", str);
	return (0);
}