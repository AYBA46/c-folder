#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i;
    int s=0;
    printf("entrez un nombre:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("la somme est : %d",s);
    return 0;
}