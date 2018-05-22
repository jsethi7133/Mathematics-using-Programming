//matrix multiplication
#include<iostream.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
for(int i=0;i<3;i++)
  {for(int j=0;j<3;j++)
	 {cin>>a[i][j];}}
for(int i1=0;i1<3;i1++)
 { for(int j=0;j<3;j++)
	 {cin>>b[i][j]; }}
cout<<"Multi"<<endl;
for(int i2=0;i2<3;i2++)
  {for(int j=0;j<3;j++)
	 {
		c[i][j]=0;
		for(int k=0;k<3;k++)
			{c[i][j]=c[i][j]+a[i][k]*b[k][j];}
	  } }
  for(int i3=0;i3<3;i3++)
	{for(int j=0;j<3;j++)
	 {cout<<c[i][j]<<endl;}}

	}


