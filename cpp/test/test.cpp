#include<iostream>
using namespace std;
int main(void)
{
	float a,b;
	char h;
	cout<<"请输入表达式：";
	cin>>a>>h>>b;
	if(h='-')cout<<a-b;
	else cout<<a*b;
	cout<<endl;
	return 0;



}
