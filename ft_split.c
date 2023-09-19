/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 13:45:57 by jsakanov          #+#    #+#             */
/*   Updated: 2023/09/19 16:31:23 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count_substrings(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (j);
}

static void	ft_free_string(char **s1)
{
	int		i;

	if (s1 == NULL)
		return ;
	i = 0;
	while (s1[i])
		free(s1[i++]);
	free(s1);
}

static char	*ft_split_substring(char const *start, char const *finish)
{
	int		len;
	char	*subs;
	int		i;

	i = 0;
	len = finish - start;
	subs = (char *)malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	while (start < finish)
	{
		subs[i] = *start;
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	int			subs_count;
	char		**s1;
	char const	*start;
	int			i;

	subs_count = ft_count_substrings(s, c);
	s1 = (char **)malloc((subs_count + 1) * sizeof(char *));
	if (!s1)
		return (NULL);
	start = s;
	i = 0;
	while (*s)
	{
		if (*s == c)
		{
			if (s != start)
			{
				s1[i] = ft_split_substring(start, s);
				if(s1[i] == NULL)
					return (ft_free_string(s1), NULL);
				i++;
			}
			start = s + 1;
		}
		s++;
	}
	if (s != start)
	{
		s1[i] = ft_split_substring(start, s);
		if (s1[i] == NULL)
			return (ft_free_string(s1), NULL);
		i++;
	}
	s1[i] = 0;
	return (s1);
}
/*
#include <stdio.h>
int main(int argc, char **argv) 
{
	if (argc != 3)
		return 0;
    char	**result = ft_split(argv[1], argv[2][0]);
	if (result == NULL)
		return 0;
	for (int i = 0; result[i] != NULL; i++)
	{
		printf("%i: %s\n", i, result[i]);
	}
	ft_free_string(result);
	return 0;
}
*/
	/*int		i;

	i = 0;
	if (result) 
	{
		while (result[i] != NULL)
		{
			printf("%s\n", result[i]);
			//free(result[i]);
			i++;
		}
		ft_free_string(result, i);
	}
	return 0;

}*/
