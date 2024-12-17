/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoinemura <antoinemura@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 15:21:30 by marvin            #+#    #+#             */
/*   Updated: 2024/12/17 03:26:47 by antoinemura      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
