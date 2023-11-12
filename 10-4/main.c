//
//  main.c
//  10-4
//
//  Created by MacBook Air on 2023/11/12.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char src[30] = "happy C programming";
    printf("문자열 \" %s\"의 길이 : %i\n", src, strlen(src));
    return 0;
}
