#include<stdio.h>


int main(){
    int n;

    printf("Enter integers :");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&n);
    }

    int tab[n];
     printf("here is the even number :  \n");
    for(int i=0 ; i<n ; i++){
        if(tab[i] %2 == 0){
           printf("%d", tab[i]);
        }
    }
    return 0;

}