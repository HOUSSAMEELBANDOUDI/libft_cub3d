/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-band <hel-band@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:58 by hel-band          #+#    #+#             */
/*   Updated: 2024/10/18 12:18:07 by hel-band         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	**malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}

int	is_saperator(char c, char *sap)
{
	int	i;

	i = 0;
	while (sap[i])
	{
		if (c == sap[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sap)
{
	int	i;
	int	w_count;
	int	state;

	i = 0;
	w_count = 0;
	state = 0;
	while (str[i])
	{
		if (!is_saperator(str[i], sap))
		{
			if (!state)
				w_count++;
			state = 1;
			i++;
		}
		else
		{
			state = 0;
			i++;
		}
	}
	return (w_count);
}

char	*ft_strdup_w(char *str, int *index, char *sap)
{
	char	*word;
	int		len;
	int		i;

	i = *index;
	len = 0;
	while (str[i] && !is_saperator(str[i++], sap))
		len++;
	word = (char *) malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (str[*index])
	{
		if (!is_saperator(str[*index], sap))
		{
			word[i++] = str[*index];
			(*index)++;
		}
		else
			break ;
	}
	word[len] = '\0';
	return (word);
}

char	**ft_split(char *str, char *sap)
{
	char	**arr_str;
	int		i;
	int		words;
	int		w_i;

	i = 0;
	w_i = 0;
	words = count_words(str, sap);
	arr_str = (char **) malloc((words + 1) * 8);
	if (!arr_str)
		return (NULL);
	while (w_i < words)
	{
		while (is_saperator(str[i], sap) && str[i])
			if (!str[i++])
				break ;
		arr_str[w_i] = ft_strdup_w(str, &i, sap);
		if (!arr_str[w_i])
			return (malloc_error(arr_str));
		w_i++;
	}
	arr_str[words] = 0;
	return (arr_str);
}
