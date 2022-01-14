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

void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *str_copy;
	int i;

	str_copy = (unsigned char *)str;
	i = 0;
	while (i <= n)
	{
		if (*str_copy == c){
			i = n;
			str_copy--;
		}
		i++;
		str_copy++;
	}
	return str_copy;
}

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   const char str2[] = "http://www.tutorialspoint.com";
   const char ch2 = '.';
   char *ret2;

   ret = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, ret); // String after |.| is - |.tutorialspoint.com|

    ret2 = ft_memchr(str2, ch2, strlen(str2));

   printf("String after |%c| is - |%s|\n", ch2, ret2); // String after |.| is - |.tutorialspoint.com|

   return(0);
}