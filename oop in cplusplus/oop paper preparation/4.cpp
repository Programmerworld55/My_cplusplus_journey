//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class result
{
	private:
	int rolno;
	string name;
	int marks[];

	public:
		void input()
		{
			cout<<"enter rolno"<<endl;
			cin>>rolno;
			cout<<"enter name"<<endl;
			cin>>name;
			cout<<"enter marks"<<endl;
			for(int i=0;i<2;i++)
			{
				cout<<"marks[<<i<<] : ";
				cin>>marks[i];
			}
		}
		void show()
		{
			cout<<endl;
			cout<<"Rol NO : "<<rolno<<endl;
			cout<<"Name IS : "<<name<<endl;
			cout<<endl;
			for(int i=0;i<2;i++)
			{
				cout<<"marks[<<i<<] is :  "<<marks[i]<<endl;
			}
		}
		void total()
		{
		//	int total_marks=500;
			int t=0;
			for(int i=0;i<2;i++)
			
				t=t+marks[i];
				cout<<"TOTAL MARKS ARE :  "<<t<<endl;
					for(int i=0;i<2;i++)
			
				t=t+marks[i];
			
				int p=(t/500)*100;
				cout<<"pertcenteage is"<<p<<endl;
			
		}
		void avg()
		{
          int t=0;
          for(int i=0;i<2;i++)
          t=t+marks[i];
          
          cout<<"average : "<<t/2<<endl;
		
		}
//		void percentage()
//		{
//			int t=0;
//			int p;
//			int total_marks=200;
//			    
//          for(int i=0;i<2;i++)
//          
//          t=t+marks[i];
//         
//          
//      
//       p=(t/total_marks)*100;
//          cout<<"percentage is "<<p<<endl;
//		}
};
main()
{
result r;
r.input();
r.show();

r.total();


r.avg();

//r.percentage();
}
