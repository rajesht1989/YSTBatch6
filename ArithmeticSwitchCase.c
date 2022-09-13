// write a program in arithmatic operator in switch case
#include<stdio.h>
int a,operator,b;
void getNumber(){
printf("Enter a expression ");
scanf("%d %c %d",&a, &operator,&b);
}
int calculation(int a,char operator,int b){
 switch(operator){
 case '+':
 printf("%d %c %d = %d", a, operator, b, a + b);
break;
case '-':
printf("%d %c %d = %d", a, operator, b, a - b);
break;
case '*':
printf("%d %c %d = %d", a, operator, b, a * b);
break;
case '/':
printf("%d %c %d = %d", a, operator, b, a / b);
break;
case '%':
printf("%d %c %d = %d", a, operator, b, a % b);
break;
default:
printf("None of operation");
break;
}
return operator;
}
int main(){
getNumber();
calculation(a,operator,b);
 }
