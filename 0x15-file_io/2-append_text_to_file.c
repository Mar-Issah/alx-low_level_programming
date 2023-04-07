#include "main.h"

/**
* append_text_to_file - Function that appends text at the end of a file
* @filename: Name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on success and -1 on failure
**/

int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t bytes_written;
size_t len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[len] != '\0')
len++;

bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || (size_t)bytes_written != len)
{
close(fd);
return (-1);
}
}
else
{
if (access(filename, W_OK) == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
