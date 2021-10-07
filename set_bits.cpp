#include<iostream>
using namespace std;
int main()
{
	int c=0,num=100;
	while(num)
	{
		if(num&1==1)
		{
			c++;
		}
		num>>=1;
	}
	cout<<c;
}
