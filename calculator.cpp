//Basic Calculator APP Which performs typical calcualtor applications
#include<iostream>
using namepsace std;
//Adding 2 numbers
int add(int a, int b)
{
	return a+b;
}
int subtraction(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);
int main()
{
	int a=0, b=0;
	cout<<"enter the two numbers"<<endl;
	cin>>a>>b;
    	cout<<"Addition: "<<add(a,b)<<endl;
    	cout<<"Subtraction: "<<subtraction(a,b)<<endl;
	cout<<"Multiply: "<<multiply(a,b)<<endl;
	cout<<"Divide: "<<divide(a,b)<<endl;
}
//subtract two numbers
int subtraction(int a, int b)
{
	return a-b;
}
//multiply two numbers
int multiply(int a,int b)
{
	return a*b;
}
//divide two numbers
double divide(int a, int b)
{
	return a/b;
}
