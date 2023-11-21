//     Name:Asad Bashir      Rol no:75
//Write Program For Displaying An Apropriate Shape And Also Find Information Given About Them.

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
const double PI=3.14285714286;
int main()
{
string shape;	
double A1=0.0,P=0.0,A2=0.0,C=0.0,A3=0.0,V=0.0;
double L,W,R,r,H; 
	   	
	cout<<"Enter your desired Shape:";
	cin>>shape;
cout<<fixed<<showpoint<<setprecision(2);	
if(shape=="rectangle"||shape=="Rectangle")	
{
	cout<<"\nEnter the Dimensions Of a Rectangle Such As, \nLength=";
	cin>>L;
	cout<<"Width=";
	cin>>W;
A1=L*W;
	cout<<"\nArea Of A Rectangle:"<<A1<<endl;
P=2*(L+W);		
	cout<<"\nPerimeter Of A Rectangle:"<<P<<endl;
}
else if(shape=="circle"||shape=="Circle")	
{
	cout<<"\nEnter the Dimensions Of a Circle Such As, \nRadius=";
	cin>>R;
A2=PI*R*R;
	cout<<"\nArea Of A Circle:"<<A2<<endl;
C=2*PI*R;		
	cout<<"\nCircumference Of A Circle:"<<C<<endl;
}
else if(shape=="cylinder"||shape=="Cylinder")	
{
	cout<<"\nEnter The dimensions Of a Cylinder Such As, \nRadius=";
	cin>>r;
	cout<<"Height=";
	cin>>H;
A3=((2*PI*r*H)+(2*PI*r*r));
	cout<<"\nSurface Area Of A Cylinder:"<<A3<<endl;
V=PI*r*r*H;		
	cout<<"\nVolume Of A Cylinder:"<<V<<endl;
}
else
{
	cout<<"\nInvalid Shape !";
}	
return 0;	
}

