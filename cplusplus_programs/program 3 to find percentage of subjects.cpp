//     Name:Asad Bashir       Rol no:75
//write a program  which display percentage of five subjects. 
#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3,n4,n5,sum;
	float total=500;
	float per;
	cout<<"enter the marks of 5 subject"<<endl;
	cin>>n1>>n2>>n3>>n4>>n5;
	sum=n1+n2+n3+n4+n5;
	per=(sum/total)*100;
	cout<<"percentage of 5 subject is"<<per;
	return 0;
}
