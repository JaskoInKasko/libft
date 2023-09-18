/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsakanov <jsakanov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:42:11 by jsakanov          #+#    #+#             */
/*   Updated: 2023/09/04 18:14:08 by jsakanov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	unsigned char	a;

	a = 'A';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", isalpha(a));
}*/	