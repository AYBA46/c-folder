#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int num,i;

    printf("Enter num :");
    scanf("%d",&num);

    for(i = 1 ; i <=10 ; i++){
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;

}