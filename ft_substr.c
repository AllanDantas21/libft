/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:08:59 by aldantas          #+#    #+#             */
/*   Updated: 2023/10/20 12:36:44 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdlib.h>
#include <stdio.h>*/
char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	char	*d;
	char	*ns;
	int		len;

	len = start - n;
	ns = (char *) s;
	d = malloc(sizeof((char)*(len + 1)));
	if (!new)
		return (NULL);
	while (len--)
	{
		new = ns[start++];
	}
	new = '\0';
}
/*int	main()
{
	char *s = "abacate";
	printf("%s", ft_substr(s, 2, 3));
}*/
