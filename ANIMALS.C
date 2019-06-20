#include<iostream.h>
#include<conio.h>

class animals
{

public:

void cat(){
cout<<"meow"<<endl;
}
 };
class animals2:public animals
{
public:
void dog(){
cout<<"bark"<<endl;
}
};
void main()
{
clrscr();
animals obj;
obj.dog(10);
obj.cat(11);
getch();
}
