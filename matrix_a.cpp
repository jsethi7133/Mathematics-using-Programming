//matrix addition and subtraction
#include<iostream.h>
void main()
{
int a[3][3],b[3][3];
for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
	 cin>>a[i][j];
for(int i1=0;i1<3;i1++)
  for(int j1=0;j1<3;j1++)
	 cin>>b[i1][j1];
for(int i2=0;i2<3;i2++)
  for(int j2=0;j2<3;j2++)
	 cout<<(a[i2][j2]+b[i2][j2])<<endl;
for(int i3=0;i3<3;i3++)
  for(int j3=0;j3<3;j3++)
	 cout<<(a[i3][j3]-b[i3][j3])<<endl;
	 }

