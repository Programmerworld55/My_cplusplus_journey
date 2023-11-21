//     Name:Asad Bashir       Rol no:75
//write a program for finding rrots of equation by using if_else structure.

#include<iostream>
#include<cmath>
using namespace std;
 main()
{
int a=0,b=0,c=0,D=0;
	
	cout<<"Enter  values Of a , b & c = "<<endl;
	cin>>a>>b>>c;
	
D=(b*b)-4*a*c;	
	
if(D==0)
{
	cout<<"Equation has Single Repeated Roots.";
}
else if(D>=0)	
{
	cout<<"Equation has two Real Roots.";
	cout<<"Roots Are: \""<<(-b-(pow(D,0.5)))/(2*a)<<"\" And \""<<(-b+(pow(D,0.5)))/(2*a)<<"\"."<<endl;
}
else 	
{
	cout<<"Equation has Two Complex Roots.";
}

}
