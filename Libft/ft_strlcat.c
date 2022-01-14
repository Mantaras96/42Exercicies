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

size_t ft_strlen (const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return i;
}

size_t ft_strlcat (char * restrict dst, const char * restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l_dest;
	unsigned int	l_src;

	i = ft_strlen(dst);
	j = 0;
	l_dest = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (dstsize < 1)
	{
		return (l_src + dstsize);
	}
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < l_dest)
		return (l_src + dstsize);
	else
		return (l_dest + l_src);

}



void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];

    char string2[] = "Hello there, Venus";
    char buffer2[19];
    int r;
    int r2;

    r = strlcat(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );

    r2 = ft_strlcat(buffer2,string2,size);

    printf("Copied2 '%s' into '%s', length %d\n",
            string2,
            buffer2,
            r
          );
}

int main()
{
    test(19);
    test(10);
    test(8);
    test(0);

    return(0);
}