//euler rule
#include<iostream.h>
float f(float x,float y)
{
return x+y;
}
void main()
{
float h=0.2,y0=1,x=0,y;
for(int i=0;i<2;i++)
{
y=y0+(h*f(x,y0));
x=x+h;
y0+y;
}
cout<<y;
}

