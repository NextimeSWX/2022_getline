/*
 * E89 Pedagogical & Technical Lab
 * project:     getline
 * created on:  2023-05-11 - 11:06 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: main.c
 */

#include "stu.h"
#include <stdio.h>

int main(void) {
    char *str;
    int max;

    max = 40;
    str = stu_getline(0);
    while (str && max--) {
        puts(str);
        free(str);
        str = stu_getline(0);
    }
    return (0);
}

