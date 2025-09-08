#include<stdio.h>


int main(){
    int n;

    printf("Enter the integers :");
    scanf("%d",&n);

    int tab[n];

    printf("Enter interger element : \n");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&tab[i]);
    }
     printf("Odd ellement are :\n");
      for(int i=0 ; i<n ; i++){
        if(tab[i] % 2 !=0){
        printf("%d ", tab[i]);
        }
    }
   
   
    return 0;
}