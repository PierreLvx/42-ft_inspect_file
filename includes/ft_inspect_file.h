/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inspect_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <plavaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:40:29 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 19:48:37 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INSPECT_FILE_H
# define FT_INSPECT_FILE_H

# include <dirent.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include <pwd.h>
# include <grp.h>
# include <time.h>

#include "../libft/libft.h"

struct stat		fst;

void			get_file_group(const char *filename);
void			get_file_links(const char *filename);
void			get_file_modtime(const char *filename);
void			get_file_name(const char *filename);
void			get_file_owner(const char *filename);
void			get_file_perms(const char *filename);
void			get_file_size(const char *filename);
void			get_file_type(const char *filename);

#endif
