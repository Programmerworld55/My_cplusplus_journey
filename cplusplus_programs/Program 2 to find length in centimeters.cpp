//     Name:Asad Bashir       Rol no:75
//write a program in which user enter length in feet and inches and program display total number of feet,inches and centimeters.
#include <iostream>
using namespace std;
 main()
{
	int length,feet,inches,centimeter;
	cout<<"enter length in feet"<<endl;
	cin>>feet;
	cout<<"enter length in inches"<<endl;
	cin>>inches;
	int inch_foot=12;
	int total_inches=inch_foot*feet+inches;
	float centimeters=feet*total_inches;
	cout<<"total number of feet"<<feet<<endl;
	cout<<"total number of inches"<<total_inches<<endl;
	cout<<"number of centimeters"<<centimeters<<endl;
}
