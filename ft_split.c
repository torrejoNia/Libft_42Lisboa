/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:07:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/12 17:27:10 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, char *charset);
static int	ft_word_count(char *str, char *charset);
static char	*ft_strdup_range(char *str, int start, int end);

/**
 * @brief Splits a string by a delimiter into an array of strings.
 * @param const char *s
 * @param char c
 * @return char** — array of substrings
 */
char	**ft_split(const char *s, char *c)
{
	int		i;
	int		start;
	int		word_i;
	int		words;
	char	**res;

	i = 0;
	word_i = 0;
	words = ft_word_count(s, c);
	res = malloc((words + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && ft_is_sep(s[i], c))
			i++;
		start = i;
		while (s[i] && !ft_is_sep(s[i], c))
			i++;
		if (start < i)
			res[word_i++] = ft_strdup_range(s, start, i);
	}
	res[word_i] = NULL;
	return (res);
}

static int	ft_is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	ft_word_count(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], charset))
				i++;
		}
	}
	return (count);
}

static char	*ft_strdup_range(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char *));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

/* int	main(void)
{
	char **tab;
	int i = 0;
	int j;

	tab = ft_split("Hello,,world;this is|42", ",;| ");
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{ 
			write(1, &tab[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return(0);
} */