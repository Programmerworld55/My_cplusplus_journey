//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class test
{
	private:
		int a,b,c;
		public:
		void in()
		{
			cout<<"enter three marks"<<endl;
			cin>>a>>b>>c;
			
		}
		int sum()
		{
			return a+b+c;
		}
		float avg()
		{
			return (a+b+c)/3.0;
		}
		
		};
main()
{
	test a;
	a.in();
	int s;
	float m;
	s=a.sum();
	m=a.avg();
	cout<<s<<endl;
	cout<<m<<endl;

}
