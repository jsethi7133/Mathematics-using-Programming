//simpson rule
#include<iostream.h>
float f(float x)
{
return 1/(1+x*x);
}
void main()
{
 float h=1;
 float s=0,s1=0,s2=0;
 float a,b;
 cin>>a>>b;
 float ans=f(a)+f(b);
 for(int i=1;i<b;i=i+2)
	s1=s1+f(i);
 for(int j=2;j<b;j=j+2)
	s2=s2+f(j);
 s=4*s1+2*s2;
 s=s+ans;
  cout<<(h/3)*s;
  }
