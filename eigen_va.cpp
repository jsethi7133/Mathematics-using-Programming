//eigen values of a matrix
#include<iostream.h>
#include<math.h>
void main()
{
int a[2][2];
for(int i=0;i<2;i++)
  for(int j=0;j<2;j++)
	 cin>>a[i][j];
float t=-(a[0][0]+a[1][1]);
int c=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
int d=sqrt(t*t-4*1*c);
int x1=(-t+d)/2*1;
int x2=(-t-d)/2*1;
cout<<x1<<endl<<x2;
}
