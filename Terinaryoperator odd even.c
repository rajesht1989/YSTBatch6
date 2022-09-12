//write a program to get  from user the odd or even check terinary operator on console
 #include<stdio.h>
 int getNumberFromUser(){
     int number;
     scanf("%d",&number);
     return number;
 }
 void terinaryOperatorNumber(int a){
    
          (a %2==0) ? printf("even") : printf("odd");
        
        
 }
 void main(){
     printf("Enter the number ");
     int a=getNumberFromUser();
    terinaryOperatorNumber(a);
 }
