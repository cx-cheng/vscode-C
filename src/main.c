#include<stdio.h>
#include"max.h"
#include"min.h"

int max(int a, int b);

int main(int argc, char *argv[]){
    printf("%d\n", 1);
    printf("%d\n", 2);
    printf("%d\n", 3);
    printf("%d\n", 4);
    printf("the max of (7, 8) is: %d\n", max(7, 8));
    printf("the min of (11, 12) is: %d\n", min(11, 12));
    return 0;

}