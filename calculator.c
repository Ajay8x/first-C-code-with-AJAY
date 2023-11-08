#include<stdio.h>
#include<conio.h>

int main()
{
int i;
clrscr ();

    printf(" Enter \n 1(+)   2(-)   3(*)  4(/) \n");
    scanf("%d",&i);
    switch(i){
    
    case 1 : printf("+ addison  :");
    int a,b,c;
   scanf("%d%d",&a,&b);
    c=a+b;
    printf( " \n answer : %d ",c);
    
     break;
    
    case 2 : printf("\n-  Subtraction:");
    
   scanf("%d%d",&a,&b);
    c=a-b;
    printf("\n answer : %d ",c);
    
     break;
    
    case 3 : printf(" \n* multiplication :");
    
  scanf("%d%d",&a,&b);
    c=a*b;
    printf("\n answer :  %d ",c);
    
     break;
  
  
    case 4 : printf(" \n / division :");
   
    scanf("%d%d",&a,&b);
    c=a/b;
    printf("\nanswer :  %d ",c);
     break; 
  
 
 
  default : printf("Try again ..");
    
    
   }
   
   getch();
   return 0;
   }