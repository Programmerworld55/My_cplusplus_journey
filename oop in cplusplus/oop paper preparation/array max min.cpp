//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class test
{
public:
	int a[5];
	
	void array()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"enter a["<<i<<"]:"<<endl;
			cin>>a[i];
		}
	}
   void max()
   {
   	int m=a[0];
   	for(int i=0;i<5;i++)
   	{
   	if(a[i]>m)
   	{
	   
   	m=a[i];
   }
   	
   }
   cout<<m;
}
};
main()
{
	test a;
	a.array();
	a.max();
}
