#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

char **_strtok(char *str);
char *tokenizer(char **placeholder);
char **fill_array(char **arr, char *placeholder, int wc);
int wc(char *placeholder);

#endif /* _MAIN_H_ */
