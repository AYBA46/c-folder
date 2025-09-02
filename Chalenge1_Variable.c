#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //char *name; 
    char name[12];
    int age;
    int n;
    int lastname;
    int gender;
    int email;
    //char name[5]="hind";
    //pour saisier

    // printf("Entrez le nombre:");
    // scanf("%d",&n);
    //name=malloc((n+1)*sizeof(char));

    printf("firstname :");
    scanf("%s",name);

    printf("lastname :");
    scanf("%s",&lastname);
    
    printf("Age :");
    scanf("%s",&age);

    printf("gender :");
    scanf("%s",&gender);

    printf("email :");
    scanf("%s",&email);

    //pour Afficher
   // printf("%s",name);
    //printf("%d",age);
    return 0;
}

