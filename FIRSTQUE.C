#include<stdio.h>
#include<conio.h>
void multiply(){
for(int i=2;i<=256;i*=2){
printf("\n%d",i);
}
}
void main(){
clrscr();
multiply();
getch();
}