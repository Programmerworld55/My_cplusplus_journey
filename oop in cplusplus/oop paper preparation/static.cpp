//   NAME   :   ASAD BASHIR           ROL NO    :     75
#include<iostream>
using namespace std;
class student
{
	private:
		static int r;
		string name;
		int marks;
		int rolno;
		public:
			student()
			{
				r++;
				rolno=r;
			}
			void get()
			{
				cout<<"enter name "<<endl;
				cin>>name;
				cout<<"enter marks "<<endl;
				cin>>marks;
			
			}
			void show()
			{
				cout<<"ROL NO : "<<rolno<<endl;
				cout<<"NAME is : "<<name<<endl;
				cout<<"MRKS ARE : "<<marks<<endl;
				
				
			}
};
 int student:: r=0;
main()
{
student s1,s2,s3;
s1.get();
s1.show();
s2.get();
s2.show();
s3.get();
s3.show();


}
