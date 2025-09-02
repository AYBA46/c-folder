#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
   int h1,m1,s1,h2,m2,s2;
   int t1, t2;

   printf("Enter first time (HH:MM:SS)");
   scanf("%d:%d:%d",&h1,&m1,&s1);

   printf("Enter secound time (HH:MM:SS)");
   scanf("%d:%d:%d",&h2,&m2,&s2);

   t1 = h1*3600 + m1*60 + s1;
   t2 = h2*3600 + m2*60 + s2;

   if (t1<t2){
    printf("The %d:%d:%d comes before %d:%d:%d;\n",h1,m1,s1,h2,m2,s2);
   }
   else if (t1>t2){
    printf("The %d:%d:%d comes before %d:%d:%d;\n",h2,m2,s2,h1,m1,s1);
   }
 return 0;
}