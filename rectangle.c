//write a program to get rectangle length and breath get from user and identify the area and perimeter
#include<stdio.h>
int getNumberFromUser(){
    int a;
        scanf("%d",&a);
        return a;
        }
      int lengthOfRectangle(int l){
          return l;
      }
      int breathOfRectangle(int b){
          return b;
      }
  int identifyAreaOfRectangle(int l,int b){
            return (l*b);
        }
        int identifyPerimeterOfRectangle(int l,int b){
            return 2*(l+b);
        }
        void main(){
           printf("Enter the length ");
           int l=getNumberFromUser(l);
           printf("Enter the breath ");
           int b=getNumberFromUser(b);
           int area=identifyAreaOfRectangle(l,b);
           int perimeter=identifyPerimeterOfRectangle(l,b);
          printf("Area value is %d\n",area);
           printf("Perimeter value is %d\n",perimeter);
          
            }
