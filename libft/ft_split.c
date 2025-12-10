/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaurel <msaurel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 14:22:03 by msaurel           #+#    #+#             */
/*   Updated: 2025/11/24 17:54:22 by msaurel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_all(char **arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*copy_word(const char *s, int len)
{
	char	*word;
	int		i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);
	while (j < count_words(s, c))
	{
		while (s[i] == c)
			i++;
		arr[j] = copy_word(s + i, word_len(s + i, c));
		if (!arr[j])
		{
			free_all(arr, j);
			return (NULL);
		}
		i += word_len(s + i, c);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

// int	main(void)
// {
// 	const char *s = "salut ca vas fewf fewfewwe feeef ";
// 	char c = ' ';
// 	char **rtn;
// 	int i;

// 	i = 0;
// 	rtn = ft_split(s, c);
// 	while (i != count_words(s, c))
// 	{
// 		printf("%s\n", rtn[i]);
// 		i++;
// 	}
// 	i = count_words(s, c);
// 	free_all(rtn, i);
// 	return (0);
// }
