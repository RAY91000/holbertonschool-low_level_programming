#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * create_file - Creates a file.
 * @filename: Pointer to the name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len = 0;
	mode_t old_umask;

	if (filename == NULL)
		return (-1);

	old_umask = umask(0);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		umask(old_umask);
		return (-1);
	}

	umask(old_umask);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

