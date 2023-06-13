#ifndef MAIN_H
#define MAIN_H

/**
 * file: main.h
 * Desc: header file for all functions used in this project
 *
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argostostr(int ac, char **av);

#endif
