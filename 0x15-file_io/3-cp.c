#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/*
* main - create the copy bash script
 * @ac: argument count
 * @av: arguments as strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
if (argc != 3)
dprintf(2, "Usage: cp file_from file_to\n");
return (97);
}
int file_from, file_to;
char buffer[1024];
ssize_t bytes_read;

file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
return (98);
}

file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(file_from);
return (99);
}

while ((bytes_read = read(file_from, buffer, sizeof(buffer))) > 0)
{
if (write(file_to, buffer, bytes_read) == -1)
{
dprintf(2, "Error: Can't write to file %s\n", argv[2]);
close(file_from);
close(file_to);
return (99);
}
}
if (bytes_read == -1)
dprintf(2, "Error: Can't read from file %s\n", argv[1]);
close(file_from);
close(file_to);
return (98);

if (close(file_from) == -1 || close(file_to) == -1
dprintf(2, "Error: Can't close fd\n");
return (100);
return (0);
}
