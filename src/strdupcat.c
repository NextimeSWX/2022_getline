/*
 * E89 Pedagogical & Technical Lab
 * project:     strdupcat
 * created on:  2023-02-20 - 16:49 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strdupcat.c
 */

#include "stu.h"

char *strdupcat(const char *s1, const char *s2)
{
    char *str;
    int i;
    int j;

    i = 0;
    j = 0;
    str = malloc(sizeof(char) * (stu_strlen(s1) + stu_strlen(s2 + 1)));
    while (s1[i] != '\0') {
        str[i] = s1[i];
        i += 1;
    }
    while (s2[j] != '\0') {
        str[i] = s2[j];
        i += 1;
        j += 1;
    }
    str[i] = '\0';
    return(str);
}
