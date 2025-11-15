/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnavarr <esnavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:07:22 by esnavarr          #+#    #+#             */
/*   Updated: 2025/11/15 15:21:07 by esnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *str, char sep);
static char	*ft_strdup_range(const char *str, int start, int end);
static int	extract_words(char **res, const char *s, char c);

/**
 * @brief Splits a string by a delimiter into an array of strings.
 * @param const char *s
 * @param char c
 * @return char** — array of substrings
 */
char	**ft_split(const char *s, char c)
{
	char			**res;
	unsigned int	wc;
	int				err;
	int				i;

	if (!s)
		return (NULL);
	wc = ft_word_count(s, c);
	res = malloc((wc + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	err = extract_words(res, s, c);
	if (err >= 0)
	{
		i = 0;
		while (i < err)
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (NULL);
	}
	return (res);
}

static int	ft_word_count(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
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

static int	extract_words(char **res, const char *s, char c)
{
	unsigned int	w;
	unsigned int	i;
	unsigned int	start;

	w = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			res[w] = ft_strdup_range(s, start, i);
			if (!res[w])
				return (w);
			w++;
		}
	}
	res[w] = NULL;
	return (-1);
}

/*
int	main(void)
{
	char **tab;
	int i = 0;
	int j;

	tab = ft_split("Hello,,world,this is|42", ',');
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
	return (0);
}  */