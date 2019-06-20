#include<iostream.h>
#include<conio.h>


void table(int a) {

 for(int i=1;i<=10;i++){
  cout<<a <<"*" <<i <<"=" <<a*i <<endl;
 }


}
void main(){
clrscr();

table(2);


getch();
}