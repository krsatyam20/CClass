#include<iostream.h>
#include<conio.h>


class a{

 public:
 void hello(){
  cout<<"hello";

 }
};
class b : public a {

public:
  void add(){
   cout<<10+20;
  }


};
void main(){
clrscr();

// a obj1;
 b obj;

 obj.hello();
 obj.add();

getch();


}



