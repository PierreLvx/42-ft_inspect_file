/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_links.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:12 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 20:31:25 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_links(const char *filename)
{
	(void)filename;
//	if (stat(filename, &fst))
//		fprintf(stderr, "'stat' failed for '%s': %s.\n", filename, strerror (errno));
	ft_putstr("Links: ");
	ft_putnbr(fst.st_nlink);
	ft_putchar('\n');
}
