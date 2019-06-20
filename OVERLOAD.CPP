#include<iostream.h>
#include<conio.h>

class a{
public:

   void hello(){
   cout<<"hello";

   }
};
class b :public a{
public:
 void hello() {
  cout<<"hello student" ;

 }
};
void main(){
clrscr();

b obj;

obj.hello();







getch();
}