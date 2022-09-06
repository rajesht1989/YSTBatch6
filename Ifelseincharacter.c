// get a letter from user and using if else statement 
#include <stdio.h>
char getLetterFromUser(){
char name;
scanf("%c",& name);
return name;
}
char identifyTheLetter(int a){
if (a=='a'||a=='A'){
  printf("Anitha");
  }else if(a=='b'||a=='B'){
      printf("Banu");
}else if(a=='c'||a=='C'){
printf("Catherine");
}else if(a=='d'||a=='D'){
    printf("Dhurga");
}else if(a=='e'||a=='E'){
  printf("Esther");
}else if(a=='f'||a=='F'){
  printf("Fathima");
}else if(a=='g'||a=='G'){
  printf("Gaythri");
}else if(a=='h'||a=='H'){
  printf("Haritha");
}else if(a=='i'||a=='I'){
    printf("Indhuja");
  }else if(a=='j'||a=='J'){
      printf("Jennani");
}else if(a=='k'||a=='K'){
printf("keniya");
}else if(a=='l'||a=='L'){
printf("liza");
}else{
  printf("This letter is over ");
}}
void main(){
printf("enter the name ");
char a=getLetterFromUser();
identifyTheLetter(a);
}
