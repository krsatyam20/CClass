#include<iostream.h>
#include<conio.h>

class a{
public:
 void aa(){
  cout<<"play"<<endl;
 }



};

class b: public a{
     public:
     void bb(){

     cout<<"Study"<<endl;

     }



};
class c:public b {
  public:
  void cc(int a){
   cout<<"reading" <<a;

  }

};
void main()
{
 clrscr();
// call a class and create object

c obj;


obj.bb();
obj.aa();
obj.cc(9)
;
getch();
 }










