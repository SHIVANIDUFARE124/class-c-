#include<iostream>
using namespace std;
class matrix{
	int a[3][3];
	int b[3][3];
	int c[3][3];
	int i,j,k;
	public:
		void mult();
		void inputmatrix();
		void outputmatrix();
};
void matrix:: inputmatrix()
{
	cout<<"enter the values for the first matrix";
	cout<<"\n matrix 1,row 1:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"enter the values for the second matrix";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
}
void matrix::mult()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
}
void matrix::outputmatrix() 
{
	cout<<"the resultant matrix is:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<c[i][j];
		}
		cout<<endl;
	}
}
int main()
{
	matrix X;
	X.inputmatrix();
	X.mult();
	X.outputmatrix();
	system("pause");
	return 0;
	
}
