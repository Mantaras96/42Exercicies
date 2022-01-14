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

char *ft_strchr (const char *s, int c)
{
	char *str;

	str = (char *)s;
	while (*str != c)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}

	return (str);
}

int main() {
	const char str[] = "www.tutorialspoint.com";
   const char ch = '.';\
   	const char str2[] = "www.tutorialspoint.com";
   const char ch2 = '.';
   char *ret;
   char *ret2;
   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

    ret2 = ft_strchr(str2, ch2);

   printf("String after |%c| is - |%s|\n", ch2, ret2);



}