#include<stdio.h>


int main(){
    int n;
    float sum=0 , ave;

    printf("Enter total :");
    scanf("%d",&n);

    int tab[n];

    printf("Enter  integers : \n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&tab[i]);
        sum+=tab[i];
    }
    ave=sum/n;

    printf("Average is %.2f",ave);


return 0;

}