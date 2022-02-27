#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main()
{
    FILE *p_src_file = NULL;

    // open file for read/write
    p_src_file = fopen("example.txt", "rb+");
    if(p_src_file == NULL)
    {
       perror("fopen error\n");
    }

    printf("hello world");
    return 0;
}
