#include<stdio.h>
#include<conio.h>
void add(){
for(int i=1;i<=40;i+=3){
if(i%2==0){
printf("\n-%d",i);
}
else
{
printf("\n%d",i);
}
}
}
void main(){
clrscr();
add();
getch();
}

