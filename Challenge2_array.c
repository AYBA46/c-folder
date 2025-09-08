#include<stdio.h>


int main(){
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    int number[n];

    for(int i=0; i<n; i++ ) {
    printf("Enter number %d :", i);
    scanf("%d", &number[i]);
    }

return 0;
}