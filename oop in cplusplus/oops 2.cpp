#include<iostream>
using namespace std;
class marks
{
	private:
	int a,b,c;
	public:
		void in()
		{
			cout<<"enter threee marks "<<endl;
			cin>>a>>b>>c;
		}
		int sum()
		{
			return a+b+c;
		}
		int avg()
		{
			return a+b+c/3;
		}
	};
		int main()
		{
			marks m;
			m.in();
			int s;
			float a;
			s=m.sum();
			a=m.avg();
			cout<<"sum = "<<s<<endl;
			cout<<"avg = "<<a<<endl;
		
		}
	
