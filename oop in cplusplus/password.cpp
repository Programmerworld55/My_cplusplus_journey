#include<iostream>
using namespace std;
int n;
int n2;
void password(int n)
{
	cout<<"            *****sign up*****"<<endl;
	string name;
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"plz enter password "<<endl;
	cin>>n;
}
void signin()
{
	cout<<"            *****sign in*****"<<endl;
	string name;
	int n2;
	cout<<"enter name"<<endl;
	cin>>name;
	cout<<"plz enter password "<<endl;
	cin>>n2;
	if(n2==n)
	{
		cout<<"congratulations"<<endl;
	}
	else
	{
		cout<<"enter correct password"<<endl;
	}
}


int main()
{
	cin>>n;
	int n;
	if(n==1)
	{
	password(n);
   }
   else if(n==2)
   {
   	signin();
	} 
}