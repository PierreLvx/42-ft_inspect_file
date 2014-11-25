/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_links.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:12 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/25 20:35:59 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_links(void)
{
	ft_putstr("Links: ");
	ft_putnbr(fst.st_nlink);
	ft_putchar('\n');
}
