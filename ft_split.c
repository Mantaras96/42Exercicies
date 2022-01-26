/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amantara <amantara@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 18:49:59 by amantara          #+#    #+#             */
/*   Updated: 2022/01/16 10:59:16 by amantara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	found_number_string(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 1;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}

char	*word_splited(const char *str, int start, int end)
{
	size_t	i;
	char	*word;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

void	write_word(char **split, char c, char const *s)
{
	size_t	i;
	size_t	j;
	int		i_copy;

	i = 0;
	j = 0;
	i_copy = -1;
	while (i <= strlen(s))
	{
		if (s[i] != c && i_copy < 0)
			i_copy = i;
		else if ((s[i] == c || i == ft_strlen(s)) && i_copy >= 0)
		{
			split[j++] = word_splited(s, i_copy, i);
			i_copy = -1;
		}
	i++;
	}
	split[j] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	write_word(split, c, s);
	return (split);
}
