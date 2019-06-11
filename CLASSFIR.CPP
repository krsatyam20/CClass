d#include<iostream.h>
#include<conio.h>
class addition{
// no argument no return
// Create A function
public:
int add(int a,int b){

cout<<"hello";
return a+b;

}
  int sub(int a1,int b1){

    return a1-b1;
  }
};


void main() {
clrscr();
int x,y;
//create object of class object name is ad
addition ad;

x=ad.add(10,20);
cout<<x;

y=ad.sub(40,20);
cout<<y;

getch();
}
