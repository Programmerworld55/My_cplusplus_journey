//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class time
{
	private:
		int h;
		int m;
		int s;
		public:
			time2()
			{cout<<"enter hours"<<endl;
			cin>>h;
			cout<<"enter minutes"<<endl;
			cin>>m;
			cout<<"enter seconds"<<endl;
			cin>>s;
				
			}
			void show()
			{
				cout<<"hours are "<<h<<endl;
				cout<<"minutes are "<<m<<endl;
				cout<<"seconds are"<<s<<endl;
			}
			time operator ++()
			{
		time temp;
		h=h+1;
		m=m+5;
		s=s+2;
		
		//temp.m=m;
		//temp.
		return temp;
			
			}
			time operator --()
			{
				time temp;
				m=m-1;
			}
};
main()
{
	time x,y;
	x.time2();
//x.show();
     ++x;
    x.show();
    y=++x;
    x.show();
    //x.time2();
    --x;
    x.show();
}
