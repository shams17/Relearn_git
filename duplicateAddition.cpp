#include<iostream>
using namepsace std;
int add(int a, int b)
{
	return a+b;
}
int subtraction(int a, int b);
int main()
{
	int a=0, b=0;
	"enter the two numbers"<<endl;
	cin>>a>>b;
    	cout<<"Addition: "<<add(a,b)<<endl;
    	cout<<"Subtraction: "<<subtraction(a,b)<<endl;
}
int subtraction(int a, int b)
{
	return a-b;
}
