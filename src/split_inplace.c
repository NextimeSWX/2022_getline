/*
 * E89 Pedagogical & Technical Lab
 * project:     Split inplace
 * created on:  2023-02-20 - 09:39 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: split_inplace.c
 */

#include "stu.h"

char *split_inplace(char *str, char token)
{
    int i;

    i = 0;
    if (str == NULL) {
        return (NULL);
    }
    while (str[i] != token) {
        i += 1;
    }
    str[i] = '\0';
    return (&str[i + 1]);
}
