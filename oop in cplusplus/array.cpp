#include<iostream>
using namespace std;
main()
{
	int size=5;
	int num[size];
	int square[size];
	int cube[size];
	int sum[size];
	for(int i=0;i<5;i++)
	{
		num[i]=i;
		square[i]=i*i;
		cube[i]=i*i*i;
		sum[i]=num[i]+square[i]+cube[i];
	}int total=0;
	cout<<"numbers "<<"\t";
		for(int i=0;i<5;i++)
		cout<<num[i]<<"\t";
		cout<<endl;
		cout<<"squares "<<"\t";
		for(int i=0;i<5;i++)
		cout<<square[i]<<"\t";
		cout<<endl;
		cout<<"cubesss "<<"\t";
		for(int i=0;i<5;i++)
		cout<<cube[i]<<"\t";
		cout<<endl;
		cout<<"summmmmm "<<"\t";
		for(int i=0;i<5;i++)
		cout<<sum[i]<<"\t";
		cout<<endl;
		for(int i=0;i<5;i++)
		cout<<"Total = "<<total+sum[i];
	
}