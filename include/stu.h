/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <fcntl.h>
#include <unistd.h>

char *split_inplace(char *str, char token);
char *strdupcat(const char *s1, const char *s2);
unsigned int stu_strlen (const char *str);
char *loop_read_until(int fd, char token);
char *stu_getline(int fd);
char *stu_strdup(const char *src);
char *stu_strchr(const char *str, char search);

#endif
