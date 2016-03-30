#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/*
	This program will print its own source when run.
*/
void	dprintquote(int fd, char **lines, int i)
{
	dprintf(fd, lines[16], 34, lines[i], 34, 44, 10);
}
int		main()
{
	int		i;
	char	*lines[] = {
		"Grace_kid.c",
		"%s%c",
		"#include <stdio.h>",
		"#include <fcntl.h>",
		"#include <unistd.h>",
		"/*",
		"	This program will print its own source when run.",
		"*/",
		"void	dprintquote(int fd, char **lines, int i)",
		"{",
		"	dprintf(fd, lines[16], 34, lines[i], 34, 44, 10);",
		"}",
		"int		main()",
		"{",
		"	int		i;",
		"	char	*lines[] = {",
		"		%c%s%c%c%c",
		"	};",
		"/*",
		"	Loops below write file",
		"*/",
		"	int fd = open(lines[0], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);",
		"	if (fd == -1)",
		"		return (1);",
		"	for(i = 2; i < 16; i++)",
		"		dprintf(fd, lines[1], lines[i], 10);",
		"	for(i = 0; i < 33; i++)",
		"		dprintquote(fd, lines, i);",
		"	for(i = 17; i < 33; i++)",
		"		dprintf(fd, lines[1], lines[i], 10);",
		"	close(fd);",
		"	return (0);",
		"}",
	};
/*
	Loops below write file
*/
	int fd = open(lines[0], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (1);
	for(i = 2; i < 16; i++)
		dprintf(fd, lines[1], lines[i], 10);
	for(i = 0; i < 33; i++)
		dprintquote(fd, lines, i);
	for(i = 17; i < 33; i++)
		dprintf(fd, lines[1], lines[i], 10);
	close(fd);
	return (0);
}
