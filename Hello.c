#include<stdio.h>
int main(){
    int a , b;
    printf("Enter Number For Table: ");
    scanf("%d" , &a);
    printf("Enter Numbers Of Multiples: ");
    scanf("%d" , &b);
    
    for(int i = 1 ; i<=b ; i++){
        printf("%d \n" , a*i);
    }
}
