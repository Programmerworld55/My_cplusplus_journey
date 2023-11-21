//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class travel
{
	private:
	int km;
	int hr;
	public:
		travel()
		{
			km=0;
			hr=0;
			
		}
		void get()
		{
			cout<<"enter distance in km "<<endl;
			cin>>km;
			cout<<"enter distance in hr "<<endl;
			cin>>hr;
			
		}
		void show()
		{
		cout<<"u traveled "<<km<<" in"<<hr<<"hours"<<endl;
			
		}
		void add(travel s)
		{
			travel t;
			t.km = km + s.km;
			t.hr= hr+s.hr;
			//cout<<t<<endl;
			cout<<"total traveling is "<<t.km<<"in"<<t.hr<<"hours"<<endl;
		}
	
};
main()
{
travel my,your;
my.get();
my.show();
your.get();
your.show();
your.add(my);

}
