/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispositive.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jibanez- <jibanez-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:39:09 by jibanez-          #+#    #+#             */
/*   Updated: 2022/03/28 16:39:09 by jibanez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_ispositive(int n)
{
	ssize_t	sign;

	sign = 1;
	if (n < 0)
		return (sign *= -1);
	return (sign);
}
