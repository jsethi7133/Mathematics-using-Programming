//trapezoidal rule
#include<iostream.h>
float f(float x)
{
return 1/(1+x*x);
}
void main()
{
 float h=1;
 float s=0;
 float a,b;
 cin>>a>>b;
 float ans=(f(a)+f(b))/2;
 for(int i=1;i<b;i++)
	s=s+f(i);
 s=s+ans;
  cout<<h*s;
  }



