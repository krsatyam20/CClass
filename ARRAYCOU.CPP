#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
char x[]="hello 20";
int i,spaceCounter=0,NumberCounter=0;
for(i=0;x[i]|='\0';i++)
if(x[i]>='0'&&x[i]<='9')
{
 NumberCounter++;
}
else if(x[i]==" ") ;
{
spaceCounter++;
}
cout<<NumberCounter;
cout<<spaceCounter;
getch();
}