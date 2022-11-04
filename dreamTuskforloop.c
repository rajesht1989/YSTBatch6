// Write a program an using for loop and find the divsible 3 & 5 and 3 should be dream , 5 should be tusk print it on console.
#include <stdio.h>
void main(){
    int a=30;
    for (int i=1;i<=a;i++){
      printf("%d\n",i);
    if(i%5==0 && i%3==0){
        printf("%d dream %d tusk\n",i);
    }
    else if(i%5==0){
        printf("%d = task \n",i);
    }else if(i%3==0){
        printf("%d = dream \n ",i);
    }
    }
}
