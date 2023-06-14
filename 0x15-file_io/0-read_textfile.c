#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile- function to read text file to print to STDOUT.
 * @filename: text file being
 * @letters: input number of letters
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

if (filename == NULL)

{
return (0);
}

int fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

char *buffer = (char *)malloc((letters + 1) * sizeof(char));

if (buffer == NULL)
{
close(fd);
return (0);
}

ssize_t bytesRead = read(fd, buffer, letters);

if (bytesRead == -1)
{
close(fd);
free(buffer);
return (0);
}

buffer[bytesRead] = '\0';

ssize_t bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
close(fd);
free(buffer);

if (bytesWritten != bytesRead)
{
return (0);
}

return (bytesWritten);
}
