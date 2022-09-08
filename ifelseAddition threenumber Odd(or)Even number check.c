 //write a program getfrom three number from user  and multiplication identify them odd (or) even check
 #include<stdio.h>
 int getNumberFromUser(){
     int number;
     scanf("%d",&number);
     return number;
 }
 int identifyAdditionNumber(int a,int b, int c){
     return a*b*c;
 }
 int findOutOddOrEvenCheck(int n){
     if(n % 2 == 0){
         printf("Number is Even");
     }else{
         printf("Number is odd"); 
     }
 }
 void main(){
     printf("Enter the first number ");
     int a=getNumberFromUser();
      printf("Enter the second number ");
     int b=getNumberFromUser();
      printf("Enter the third number ");
     int c=getNumberFromUser();
      int multiplication=identifyAdditionNumber(a,b,c);
     printf(" multiplication value is %d\n",multiplication);
     findOutOddOrEvenCheck(multiplication);
 }
