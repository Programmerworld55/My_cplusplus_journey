//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class result
{
	private:
		int rollno;
		string name;
		int m1,m2,m3;
		public:
			void input()
			{
				cout<<"enter rol no"<<endl;
				cin>>rollno;
				cout<<"enter name"<<endl;
				cin>>name;
				cout<<"enter marks"<<endl;
				cin>>m1>>m2>>m3;
			}
			void show()
			{
				cout<<"rolno is  : "<<rollno<<endl;
				cout<<"name is : "<<name<<endl;
				cout<<"markls are"<<m1<<endl<<m2<<endl<<m3<<endl;
				
			}
			void avg()
			{
				int total =300;
				int sum;
				sum=m1+m2+m3;
				cout<<"sum is "<<sum;
//				int avg=sum/3;
				float per = (sum/total)*100;
				//cout<<"avg is "<<avg;
				cout<<"per is "<<per<<endl;
			}
		
};
main()
{
result m;
m.input();
m.show();
m.avg();

}
