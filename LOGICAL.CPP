#include<iostream.h>
#include<conio.h>

int logical(int a,int b){
 int c;
	if(a> b){

	 c=a-b;
	 }
	 else {

	  c=a+b;

	 }

      return c;


}

void main(){
clrscr();
int x,y,z;
cout<<"Please enter first number";
cin>>y;

cout<<"Please enter second number";
cin>>z;
x= logical(y,z);

cout<<x <<endl;

getch();
}