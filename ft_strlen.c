/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:41:37 by jsakanov          #+#    #+#             */
/*   Updated: 2023/09/05 11:50:28 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	a[] = "Jujutsu Kaisen";
	printf("%d\n", ft_strlen(a));
	printf("%lu\n", strlen(a));
	return (0);
}*/
