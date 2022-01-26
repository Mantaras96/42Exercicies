/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 11:07:06 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	l_dest;
	size_t	l_src;

	i = ft_strlen(dst);
	j = 0;
	l_dest = ft_strlen(dst);
	l_src = ft_strlen(src);
	if (dstsize == 0)
		return (l_src);
	if (l_dest > dstsize)
		return (l_src + dstsize);
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
