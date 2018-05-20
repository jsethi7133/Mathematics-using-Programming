//bisection method
#include<iostream.h>
float f(float x)
{
return ((x*x*x)+(x*x)+(3*x)-3);
}
void bisection(float a,float b)
{
  float c;
  while((b-a)>=0.0001)
  {
	 c=(a+b)/2;
	 if(f(c)==0)
	  break;
	 else if(f(c)<0)
	  a=c;
	 else
	  b=c;
  }
  cout<<c;
 }
void main()
{
 float a,b;
 cin>>a;
 cin>>b;
 bisection(a,b);
 }

