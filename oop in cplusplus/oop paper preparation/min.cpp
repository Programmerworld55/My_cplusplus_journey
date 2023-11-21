//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class test
{
private:
	int a[5];
	public:
	void array();
	 void min();
};
	void test::array()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"enter a["<<i<<"]:"<<endl;
			cin>>a[i];
		}
	}
 void test::min()
 {
 	int m=a[0];
 	for(int i=0;i<5;i++)
 	{
 		if(a[i]<a[0])
	 
 	m=a[i];
 }
 cout<<m<<endl;
}

main()
{
	test a,b;
	a.array();
	b.array();
	a.min();
	b.min();
}
