 //write a program to get  from user the vowels  print and text on console
 #include<stdio.h>
 char getNumberFromUser(){
     char number;
     scanf("%c",&number);
     return number;
 }
 void PrintLetter(char a){
     switch(a){
         case 'A':
         printf("Apple");
         break;
          case 'E':
         printf("Elephant");
         break;
          case 'I':
         printf("Ink");
         break;
          case 'O':
         printf("Olw");
         break;
          case 'U':
         printf("Umberlla");
         break;
         default:
         break;
         
     }
 }
 void main(){
     printf("Enter the letter ");
     char a=getNumberFromUser();
    PrintLetter(a);
 }



