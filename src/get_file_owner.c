/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_file_owner.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/23 19:51:45 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:51:48 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

void				get_file_owner(const char *filename)
{
	struct passwd	*pw;

	stat(filename, &fst);
	pw = getpwuid(fst.st_uid);
	ft_putstr("Owner: ");
	if (pw)
		ft_putstr(pw->pw_name);
	ft_putchar('\n');
}
