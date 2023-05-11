/*
 * E89 Pedagogical & Technical Lab
 * project:     strcat
 * created on:  2023-01-31 - 10:13 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: strcat.c
 */

#include "stu.h"

char *stu_strcat(char *dest, const char *src)
{
    int i;
    int j;
    int n;

    i = 0;
    j = stu_strlen(src);
    n = stu_strlen(dest);
    while (src[i] != '\0' && i <= j) {
        dest[n] = src[i];
        n += 1;
        i += 1;
    }
    return (dest);
}
