#include<stdio.h>

int main(){
    int choix;
    int a,b;
    printf("Entrez premier nb:");
    scanf("%d",&a);
    printf("Entrez le deuxieme nb:");
    scanf("%d",&b);
    printf("=======Menu=========");
    printf("\n1 pour somme");
    printf("\n2 pour soustraction");
    printf("\n3 pour multiplication");
    printf("\n4 pour division");
    printf("\nEntrez votre choix:");
    scanf("%d",&choix);
    switch(choix){
        case 1:
            printf("la somme: %d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("la soustraction: %d - %d = %d", a, b, a-b);
            break;
        case 3:
            printf("la multiplication: %d * %d = %d", a, b, a*b);
            break;
        case 4:
        if(b==0){
            printf("impossible");
        }else{
            printf("la division: %d / %d = %d", a, b, a/b);
        }
        break;
        default: 
            printf("Merci");
    }

    return 0;
}