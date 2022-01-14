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

void *ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t	i;

	s1_copy = (unsigned char *)str1;
	s2_copy = (unsigned char *)str2;
	i = 0;
	while (i < n)
	{

		*(s1_copy + i) = *(s2_copy + i);
		i++;
	}
	return (s1_copy);
}

int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   char dest2[] = "oldstring";
   const char src2[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   memmove(dest, src, 1);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   ft_memmove(dest2, src2, 1);
   printf("After memmove dest = %s, src = %s\n", dest2, src2);


   return(0);
}