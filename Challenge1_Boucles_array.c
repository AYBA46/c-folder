#include<stdio.h>

int main(){
    int n;
    int mult;
    int sum;
    
    printf("Enter the number :");
    scanf("%d",&n);

    int tab[9];

    printf("here is the multiplications : \n");
    for(int i=10; i>0 ; i--){
        sum=n*i;
        printf("%d * %d = %d \n",n,i,sum);
    }
return 0;

}