#include<iostream>
using namespace std;
class pattern
{
	public:
		int pyramid()
		{
			int i,j,s,rows;
			cout<<"enter no of rows";
			cin>>rows;
			for(i=1;i<=rows;i++)
			{
				for(s=i;s<rows;s++)
				{
					cout<<" ";
				}
				for(j=1;j<2*i-1;j++)
				{
					cout<<"*";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	pattern myobj;
	myobj.pyramid();
	return 0;	
}
