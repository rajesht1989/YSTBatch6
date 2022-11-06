// Write a program and get number from user an using for loop and find the divsible 9 & 3. And 9 should be yaash , 3 should be school and print it on console.

#include<stdio.h>
int getNumber(){
    int number;
    scanf("%d",&number);
    return number;
}
void findDivisible(int a){
    for (int i=0;i<=a;i++){
        printf("%d\n",i);
        if (i%9==0 && i%3==0){
            printf("%d dhurga %d saran \n",i);
        }else if(i%9==0){
            printf("%d saran \n",i);
        }else if(i%3==0){
            printf("%d dhurga \n", i);
        }
    }
}

void main(){
    printf("enter the number ");
    int a=getNumber();
    findDivisible(a);
}
