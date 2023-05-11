/*
 * E89 Pedagogical & Technical Lab
 * project:     strchr
 * created on:  2023-01-31 - 11:08 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strchr.c
 */

#include "stu.h"

char *stu_strchr(const char *str, char search)
{
    char *liste;
    int i;

    i = 0;
    if (!str) {
        return NULL;
    }
    while (str[i] != '\0') {
        if (search == str[i]) {
            liste = (char*)str;
            return (&liste[i]);
        }
        i += 1;
    }
    return (0);
}
