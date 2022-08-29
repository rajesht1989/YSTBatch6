// requirement Realtional operators in equal
#include <stdio.h>
int getNumberFromUser(){
    int a;
    scanf("%d",& a);
    return a;
}
int identifyequal(int a, int b)
{
    return a==b;
}
int main() {
  printf("Enetr your firstnumber ");
  int a=getNumberFromUser();
   printf("Enetr your secondnumber ");
  int b=getNumberFromUser();
int equal=identifyequal(a,b);
printf(" value is %d",equal);
    return 0;
}
