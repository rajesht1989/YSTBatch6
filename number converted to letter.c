// write a program get number from in user in number converted to letter check in using if else condition
#include<stdio.h>
int getNumberFromUser(){
    int letter;
    scanf("%d",&letter);
    return letter;
}
void identifyLetter(int a){
  if(a==1){
       printf("one ");
  }else if(a==2){
      printf("two "); 
  }else if(a==3){
     printf("three "); 
  }else if(a==4){
      printf("four ");
  }else if(a==5){
       printf("five ");
  }else if(a==6){
     printf("six ");  
  }else if(a==7){
     printf("seven ");    
  }else if(a==8){
       printf("eight ");
  }else if(a==9){
       printf("nine "); 
  }else if(a==10){
       printf("ten "); 
  }else{
       printf("number is not given");
 }
}
void main(){
     printf("Enter the all number ");
     int a=getNumberFromUser();
     identifyLetter(a);
}
