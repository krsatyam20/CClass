#include<stdio.h>
#include<conio.h>

//Create a function  no arguments no return
void hello(){
    for(int i=0;i<10; i++)
       {
	printf("\nhello%d",i);
       }
}// function Close Here


void table(int a){

   for(int j=0;j<=10;j++)
   {
   printf("\n%d * %d = %d",a,j,a*j);

   }
}
void main(){
 clrscr();
  // call a function
  hello();
  table(2);
  // second way
  int x;
  printf("\nplease enter the value for table");
  scanf("%d",&x);
  table(x);


 getch();

}