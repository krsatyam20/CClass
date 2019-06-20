#include<iostream.h>
#include<conio.h>

class a{
public:
void add(int a,int b){

   cout<<a+b<<endl;

}
void add(int x,int y,int z){

    cout<<x+y+z<<endl;
}

};
void main(){
 clrscr();
a obj;

obj.add(10,20);

obj.add(10,20,30);


getch();
}