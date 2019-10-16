/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphiland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 16:15:45 by tphiland          #+#    #+#             */
/*   Updated: 2019/06/28 13:09:42 by tphiland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	s;

	s = 0;
	if (!s1 || !s2)
		return (0);
	else
		while (*s1 && *s2 && s < n)
		{
			if (*s1 != *s2)
				return (0);
			s1++;
			s2++;
			s++;
		}
	if ((*s1 != '\0' || *s2 != '\0') && s < n)
		return (0);
	return (1);
}
