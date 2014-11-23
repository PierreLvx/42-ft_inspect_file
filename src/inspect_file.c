/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inspect_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 16:40:13 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 20:18:49 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_inspect_file.h"

int					inspect_file(char *filename)
{
	get_file_name((const char*)filename);
	get_file_type((const char*)filename);
	get_file_perms((const char*)filename);
	get_file_links((const char*)filename);
	get_file_owner((const char*)filename);
	get_file_group((const char*)filename);
	get_file_size((const char*)filename);
	get_file_modtime((const char*)filename);
	return (0);
}
