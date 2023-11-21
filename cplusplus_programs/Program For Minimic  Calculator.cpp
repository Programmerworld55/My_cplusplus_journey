//     Name:Asad Bashir       Rol no:75
//write a program for minimic calculator.

#include<iostream>
using namespace std;
 main()
{
int n1=0,n2=0;
char op;
	cout<<"Enter two numbers="<<endl;
	cin>>n1>>n2;

	cout<<"Enter the operator=";
	cin>>op;

switch(op)
{
case'+':
	cout<<n1<<"+"<<n2<<"="<<n1+n2<<endl;
break;	

case'-':
	cout<<n1<<"-"<<n2<<"="<<n1-n2<<endl;	
break;	
	
case'*':
	cout<<n1<<"*"<<n2<<"="<<n1*n2<<endl;
break;	
	
case'/':
if(n2!=0)
{
	cout<<n1<<"/"<<n2<<"="<<n1/n2<<endl;
}
else
{
	cout<<"Invalid Input";
}
break;	
	
case'%':
	cout<<n1<<"%"<<n2<<"="<<n1%n2<<endl;	
break;	
	
default:
	cout<<"Invalid Input!!"<<endl;
}
 	    	
}
