#include <stdio.h>
#include "askname.h"
int main(int argc, char **argv)
{
    // 2
    // 2 
    // 2
    // 2
    // 2
    // 2
    // 2
    // 2
    char first[255], last[255];
    askname(first, last);
    printf("Hello, %s %s!\n", first, last);
    return 0;
}