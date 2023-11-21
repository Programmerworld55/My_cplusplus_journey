#include<iostream>
#include<windows.h>
using namespace std;
class birthday
{
	public:
	string arr1="\t\t\t*    *     *      ***** ***** *     *      ******  ***** ****** ***** *     *\n\t\t\t*    *    *  *    *   * *   *  *   *       *    *    *   *   *    *   *     *\n\t\t\t******  *******   ** *  ** *     *         ******    *   * **     *   *******\n\t\t\t*    * *       *  *     *        *         *    *    *   *   *    *   *     *\n\t\t\t*    **         * *     *        *         ******  ***** *    *   *   *     *";
	string arr2="\t\t\t\t\t\t********     *      *     *\n\t\t\t\t\t\t*       *   * *      *   *\n\t\t\t\t\t\t*       *  *****       *\n\t\t\t\t\t\t********* *     *      *\n";
	void birthday2()
	{
		for(int i=0;i<=415;i++)
		{
			system("color 4");
			cout<<arr1[i];	
			Sleep(10);
		}
		cout<<"\n\n\n\n";
		
		
		
		
		for(int i=0;i<=160;i++)
		{
			cout<<arr2[i];
			Sleep(10);
		}
		
	}
	
	void first()
	{
	system("color 4");
	int d,m,y;
	cout<<endl<<endl<<endl;
cout<<"                  ENTER ***  DATE  ***  MONTH ***!!! AND  !!!***  YEAR"<<endl;
cout<<"                  "; cin>>d;
cout<<"                  "; cin>>m;
cout<<"                  "; cin>>y;
cout<<"\t\t  DATE     :  "<<d<<"   "<<m<<"   "<<y<<endl;
cout<<endl;
cout<<"\t\t  TODAY IS YOUR BIRTHDAY"<<endl<<endl<<endl;
	
	}
	
};
main()
{
birthday obj1;
obj1.first();
obj1.birthday2();
}
