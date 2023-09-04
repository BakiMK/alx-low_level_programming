#ifndef MAIN_H
#define MAIN_H

#include <sys/stat.h>
#include <stdio,h>
#include <stdlib>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);

#endif
