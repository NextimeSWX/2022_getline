/*
 * E89 Pedagogical & Technical Lab
 * project:     loop read until
 * created on:  2023-02-21 - 10:45 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: loop_read_until.c
 */

#include "stu.h"

char *loop_read_until(int fd, char token)
{
    char *to_free;
    char *to_return;
    int size_read;
    int i;

    to_free = malloc(sizeof(char) * 17);
    size_read = read(fd, to_free, 16);
    to_free[size_read] = '\0';
    to_return = strdup(to_free);
    while (size_read > 0) {
        i = 0;
        while (i < 16 && to_free[i] != '\0' && to_free[i] != token) {
            i += 1;
        }
        if (to_free[i] == token && size_read > 0) {
            free(to_free);
            return (to_return);
        }
        size_read = read(fd, to_free, 16);
        to_free[size_read] = '\0';
        to_return = strdupcat(to_return, to_free);
    }
    free(to_free);
    return (to_return);
}
