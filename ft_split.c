/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidki <isidki@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:16:47 by isidki            #+#    #+#             */
/*   Updated: 2022/11/01 23:58:35 by isidki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	count_words(char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = -1;
	while (str[++i])
		if (str[i] != c && (str[i + 1] == c || !str[i + 1]))
			count++;
	return (count);
}

static void	f_free(char **str, int j)
{
	while (j--)
		free(str[j]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		l;

	i = 0;
	l = -1;
	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!str)
		return (NULL);
	while (++l < count_words((char *)s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		j = i;
		while (s[i] != c && s[i])
			i++;
		str[l] = ft_substr(s, j, i - j);
		if (!str[l])
			return (f_free(str, l), NULL);
	}
	return (str[l] = NULL, str);
}
