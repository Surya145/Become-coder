#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter a,b:";
	cin>>a>>b;
	if(a<b){
		swap(a,b);
	}
	for(int i=a;i<a*b;i++){
		if(i%a==0&&i%b==0)
		{
			cout<<i;
			break;
		}
	}
}
