#include<iostream.h>
#include<conio.h>

void main()
{
clrscr();
int x[2],max,min;
for(int i=0;i<2;i++)
  {
  cout<<"enter the value of index"<<i<<"=";
   cin>>x[i];
  }
for (int j=0;j<2;j++)
  {
   max=x[0];
   if(max<x[j])
   {
   max=x[j];
   }
  }
 for(int k=0;k<2;k++)
 {
   min=x[2];
   if(min>x[k])
   {
   min=x[k];
   }
   }
cout<<"max value is:"<<max;
cout<<"min value is:"<<min;
getch();
}