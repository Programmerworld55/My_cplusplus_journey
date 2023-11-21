//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class time
{
	private:
		int hr;
		int mnt;
		int sec;
		public:
			time2(int h,int m,int s)
			{
				hr=h;
				mnt=m;
				sec=s;
		}
		void show()
		{
			cout<<"hours "<<hr<<endl;
			cout<<"minutes "<<mnt<<endl;
			cout<<" seconds "<<sec<<endl;
		}
		time operator +(time p)
		{
		hr=hr+2;
		mnt=mnt+2;
		sec=sec+2;
		
		}
		
	};
	main()
	{
		time x,y,z;
		x.time2(12,20,24);
		x.show();
		y.time2(2,2,2);
		y.show();
		z=x+y;
		x.show();
	}