#include<stdio.h>


int main(){
    int n;

    printf("Enter the number :");
    scanf("%d",&n);

    int number[n];

    //Saisie
    for(int i=2; i<n; i*=2 ) {
    printf("Enter number %d :", i);
    scanf("%d", &number[i]);
    }

    //Afficher
    for(int i=0; i<n; i++ ) {
    printf("\ntab[%d]= %d", i,number[i]);
    }

return 0;
}