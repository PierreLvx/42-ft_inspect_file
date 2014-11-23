/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plavaux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 16:40:13 by plavaux           #+#    #+#             */
/*   Updated: 2014/11/23 03:57:29 by plavaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** <stdio.h> is required for perror().
** <time.h> is required for ctime().
** TODO:
** http://www.gnu.org/software/libc/manual/html_node/Testing-File-Type.html
*/

#include <dirent.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include "libft/libft.h"

#include <pwd.h>
#include <grp.h>

#include <time.h>

static unsigned		get_file_size(const char *filename)
{
	struct stat fst;

	if (stat(filename, &fst))
		fprintf(stderr, "'stat' failed for '%s': %s.\n", filename, strerror (errno));
	return (fst.st_size);
}

void				get_file_perms(const char *filename)
{
	struct stat		fst;

	stat(filename, &fst);
	ft_putstr("Permissions: ");
	ft_putchar((S_ISDIR(fst.st_mode)) ? 'd' : '-');
	ft_putchar((fst.st_mode & S_IRUSR) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWUSR) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXUSR) ? 'x' : '-');
	ft_putchar((fst.st_mode & S_IRGRP) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWGRP) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXGRP) ? 'x' : '-');
	ft_putchar((fst.st_mode & S_IROTH) ? 'r' : '-');
	ft_putchar((fst.st_mode & S_IWOTH) ? 'w' : '-');
	ft_putchar((fst.st_mode & S_IXOTH) ? 'x' : '-');
	ft_putchar('\n');
}

void				get_file_type(const char *filename)
{
	struct stat		fst;

	stat(filename, &fst);
	ft_putstr("Filetype: ");
	if (S_ISDIR(fst.st_mode))
		ft_putstr("Folder");
	if (S_ISREG(fst.st_mode))
		ft_putstr("Regular File");
	ft_putchar('\n');
}

void				get_file_owner(const char *filename)
{
	struct stat		fst;
	struct passwd	*pw;

	stat(filename, &fst);
	pw = getpwuid(fst.st_uid);
	ft_putstr("Owner: ");
	if (pw)
		ft_putstr(pw->pw_name);
	ft_putchar('\n');
}

void				get_file_group(const char *filename)
{
	struct stat		fst;
	struct group	*gr;

	stat(filename, &fst);
	gr = getgrgid(fst.st_gid);
	ft_putstr("Group: ");
	if (gr)
		ft_putstr(gr->gr_name);
	ft_putchar('\n');
}

int					get_file_links(const char *filename)
{
	struct stat		fst;

	if (stat(filename, &fst))
		fprintf(stderr, "'stat' failed for '%s': %s.\n", filename, strerror (errno));
	return (fst.st_nlink);
}

void				get_file_modtime(const char *filename)
{
	struct stat		fst;

	stat(filename, &fst);
	ft_putstr("Last modification: ");
	ft_putstr(ctime(&fst.st_mtime));
}

static void			get_file_name(const char *filename)
{
	ft_putstr("Filename: ");
	ft_putendl(filename);
}

int					inspect_file(char *filename)
{
	get_file_name((const char*)filename);
	get_file_type((const char*)filename);
	get_file_perms((const char*)filename);
	printf("Links: %d\n", get_file_links((const char*)filename));
	get_file_owner((const char*)filename);
	get_file_group((const char*)filename);
	printf("Filesize: %d bytes\n", get_file_size((const char*)filename));
	get_file_modtime((const char*)filename);
	return (0);
}

int					main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putendl("Usage: ft_inspect_file <file name>");
		return (-1);
	}
	inspect_file(argv[1]);
	return (0);
}
