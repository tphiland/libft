/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tphiland <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 14:46:36 by tphiland          #+#    #+#             */
/*   Updated: 2019/06/20 10:48:26 by tphiland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		display;
	int		i;

	display = 0;
	i = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'\
			|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			i = -i;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		display = display * 10 + (*str - '0');
		str++;
	}
	return (i * display);
}
