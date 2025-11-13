/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:07:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/13 23:46:53 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char c, char sep);
static int	ft_word_count(const char *str, char sep);
static char	*ft_strdup_range(const char *str, int start, int end);

/**
 * @brief Splits a string by a delimiter into an array of strings.
 * @param const char *s
 * @param char c
 * @return char** — array of substrings
 */
char	**ft_split(const char *s, char c)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	word_i;
	char			**res;

	if (!s)
		return (NULL);
	word_i = 0;
	i = ft_word_count(s, c);
	res = malloc((i + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
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

static int	ft_is_sep(char c, char sep)
{
	return (c == sep);
}

static int	ft_word_count(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], sep))
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && !ft_is_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

static char	*ft_strdup_range(const char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc((end - start + 1) * sizeof(char));
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

	tab = ft_split("Hello,,world,this is|42", ",");
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