//     Name:Asad Bashir       Rol no:75
//write a program  in which display area and perimeter.
#include<iostream>
using namespace std;
int main()
{
	float l,w,a,per;
	cout<<"enter the length of rectangle"<<endl;
	cin>>l;
	cout<<"enter the width of rectangle"<<endl;
	cin>>w;
	a=l*w;
	per=(l+w)*2;
	cout<<"the area is "<<a;
	cout<<"the perimeter is "<<per;
	return 0;
}
