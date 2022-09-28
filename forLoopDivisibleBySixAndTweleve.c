// write a program get a number from user and find divibke by six and twelve 
#include <stdio.h>
int getNumber(){
    int number;
    scanf("%d",&number);
    return number;
}
int addNumber(int n){
    int add=0;
    for (int i=0;i<n;i++){
   printf("enter the number %d\n",i+1);
 add += getNumber();
        }
        return add;
}
void findDivisibleNumber(int a){
  if (a%12==0){
      printf("this is divisible by twelve ");
     } else if(a%6==0){
          printf("this is divisible by six ");
      }else{
  printf("is not divisible by six and twelve ");
          
      }
}
void main(){
    printf("enter the number ");
    int a=getNumber();
    int add=addNumber(a);
    printf("addition is %d\n",add);
    findDivisibleNumber(add);
}
