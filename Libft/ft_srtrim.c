/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 10:58:10 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int getStart(char const *s1, char const *set){
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len - 1){
		if (ft_strchr(set, s1[i]))
			return (i);
		i++;
	}
	return (i);	
}

int getEnd(char const *s1, char const *set){
	int len;
	int i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len - 1){
		if (ft_strchr(set, s1[len - 1 - i]))
			return (i);
		i++;
	}
	return (i);	
}

 char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *str;

	start = getStart(s1, set);
	end = getEnd(s1, set);
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	if (start >= end){
		return (ft_strdup(""));
	}

	str = malloc(sizeof(char) * end - start + 1);
	if (!str){
		return (NULL);
	}
	ft_strlcpy(str, s1 + start, start - end + 1);
	return(str);
}



