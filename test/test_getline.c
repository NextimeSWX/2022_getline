/*
 * E89 Pedagogical & Technical Lab
 * project:     Getline
 * created on:  2023-05-09 - 14:43 +0200
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_getline.c
 */

#include "stu.h"

Test(getline, normal)
{
    int fd1;
    //int fd2;
    char *str;

    fd1 = open("text.txt", O_RDONLY);
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "hello");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "world!");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "how are you?");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "Dolorem rerum rem eos voluptatibus deserunt rem. Expedita vel rerum quia ad consequatur suscipit consectetur.");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "ez");
    str = stu_getline(fd1);
    cr_assert_str_eq(str, "");
}


