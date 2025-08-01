#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Prints an error message to stderr and exits.
 * @code: exit code
 * @msg: message to print
 * @arg: argument to the message (e.g. filename or fd)
 */
void print_error_and_exit(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, exits on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r_bytes, w_bytes;
	char buffer[BUF_SIZE];
	mode_t file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp %s %s",
				     "file_from file_to");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s",
				     argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s", argv[2]);
	}

	while ((r_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s",
					     argv[2]);
		}
	}
	if (r_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s",
				     argv[1]);
	}

	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d", argv[1]);

	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d", argv[2]);

	return (0);
}
