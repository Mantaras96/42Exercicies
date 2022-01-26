/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 11:11:09 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char *)src;
	s2_copy = (unsigned char *)dest;
	if (s1_copy == NULL && s2_copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		*(s2_copy + i) = *(s1_copy + i);
		i++;
	}
	return (s2_copy);
}
