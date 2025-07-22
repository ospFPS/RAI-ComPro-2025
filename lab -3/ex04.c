#include <stdio.h>

int a,c,d,avg;
char b[10],A,B,C,D,F;

int main(){

    printf("Enter your name: ");
    scanf("%s", b);
    printf("Enter your Calculus score: ");
    scanf("%d",&a);
    printf("Enter your Physic score: ");
    scanf("%d",&c);
    printf("Enter your Science score: ");
    scanf("%d",&d);

    float avg = ((a+c+d)/3.0);
    
    if(avg >= 80)
     printf("%s ,your average is %.2f You got grade A\n", b,avg);
   
    if(avg >= 70 && avg < 80){
            printf("%s ,your average is %.2f You got grade B\n", b,avg);
    }
   
    if(avg >= 60 && avg < 70){
             printf("%s ,your average is %.2f You got grade C\n", b,avg);
    }
    
    if(avg >= 50 && avg < 60){
             printf("%s ,your average is %.2f You got grade D\n", b,avg);
     }
 
    if(avg < 50){
           printf("%s, your average is %.2f You got grade F\n", b,avg);
    }
     return 0;
   
}
