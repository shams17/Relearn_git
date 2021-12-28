#include<iostream>
using namepsace std;
//Adding 2 numbers
int add(int a, int b)
{
	return a+b;
}
int subtraction(int a, int b);
int multiply(int a, int b);
int main()
{
	int a=0, b=0;
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
    	cout<<"Addition: "<<add(a,b)<<endl;
    	cout<<"Subtraction: "<<add(a,b)<<endl;
}
//function to subtract two numbers
int subtraction(int a, int b)
{
	return a-b;
}
int multiply(int a,int b)
{
	return a*b;
}
