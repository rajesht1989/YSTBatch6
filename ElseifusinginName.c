// write a program get number from in user in letter converted to number check in using if else condition
#include<stdio.h>
char getNumberFromUser(){
    char a;
    scanf("%c",&a);
    return a;
}
void identifyLetter(char a){
  if(a =='A'|| a =='a'){
       printf("anitha ");
       }else if(a =='B'|| a =='b'){
            printf("Brindha");
       }else if(a =='C' || a=='c'){
           printf("chithra");
       }else if(a=='D'|| a=='d'){
            printf("devi");
       }else if(a=='E'|| a=='e'){
           printf("elavarasi"); 
       }else if(a=='F'|| a=='f'){
           printf("fathima"); 
       }else if(a=='G' || a=='g'){
             printf("gandhi");
       }else if(a=='H' || a=='h'){
           printf("harsini");
       }else if(a=='i'|| a=='i'){
            printf("ishu");
       }else if(a=='j'||a=='j'){
            printf("joker");
       }else if(a=='k'||a=='k'){
           printf("kalai");
       }else if(a=='L'||a=='l'){
           printf("leela");
       }else if(a=='M'|| a=='m'){
            printf("meena");
       }else if(a=='N'||a=='n'){
            printf("Natraj");
       }else if(a=='O'||a=='o'){
            printf("oviya");
       }else if(a=='P'||a=='p'){
            printf("palai");
       }else if(a=='Q'||a=='q'){
            printf("queen");
       }else if(a=='R'||a=='r'){
            printf("rani");
       }else if(a=='S'||a=='s'){
            printf("selvi");
       }else if(a=='T'||a=='t'){
            printf("tulasi");
       }else if(a=='U'||a=='u'){
           printf("urvasi");
       }else if(a=='V'||a=='v'){
            printf("valli");
       }else if(a=='W'||a=='w'){
            printf("wool");
       }else if(a=='X'||a=='x'){
            printf("xmas");
       }else if(a=='Y'||a=='y'){
            printf("yatchet");
       }else if(a=='Z'||a=='z'){
            printf("zeebra");
       }else{
           printf(" all names ");  
       }
            }
 void main(){
     printf("Enter the all number ");
     char a=getNumberFromUser();
     identifyLetter(a);
}
