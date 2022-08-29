// requirement Realtional operators in greaterthen
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",& a);
    return a;
}
int identifygreaterthen(int a, int b)
{
    return a>b;
}
int main() {
  printf("Enetr your firstnumber ");
  int a=getNumberFromUser();
   printf("Enetr your secondnumber ");
  int b=getNumberFromUser();
int greaterthen=identifygreaterthen(a,b);
printf(" value is %d",greaterthen);
    return 0;
}
