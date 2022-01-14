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

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t	i;

	s1_copy = (unsigned char *)src;
	s2_copy = (unsigned char *)dest;

	if (s1_copy == NULL && s2_copy == NULL){
		return (NULL);
	}
	while (i < n)
	{
		*(s2_copy + i) = *(s1_copy + i);
		i++;
	}
	return (s2_copy);
}

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   return(0);
}