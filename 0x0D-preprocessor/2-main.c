#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: 0 on success
 */
int main(void)
{
	const char *file_name;
	int file_descriptor;

	file_name = __FILE__;
	file_descriptor = STDOUT_FILENO;
	write(file_descriptor, file_name, strlen(file_name));
	write(file_descriptor, "\n", 1);
	return (0);
}
