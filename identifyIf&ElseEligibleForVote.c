#include <stdio.h>
int getNumberFromUser(){ 
int age;
scanf("%d",&age);
return age;
}
int identifyEligibleForVote(int a){
    if(a>18){
        printf("eligible for vote ");
    }else{
        printf("not eligible for vote ");
    }}
void main(){
    printf("enter your age ");
    int a=getNumberFromUser();
    identifyEligibleForVote(a);
    }
