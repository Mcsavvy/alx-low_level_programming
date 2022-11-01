#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct file - a file structure
 * @name: name of the file
 * @fd: file descriptor
 */
struct file
{
	char *name;
	int fd;
};

/* alias for struct file */
typedef struct file file_t;



ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
