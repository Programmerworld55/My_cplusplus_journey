#include<iostream>
#include<string>
using namespace std;
class Bank
{private:
	string name;
	int accountno;
string type;
	float balance;
	public:
			Bank()
			{cout<<"Account information"<<endl;
				name="ali";
				accountno=01234;
				type="personal";
				balance=23000.00;
				
			}
			void deposit(int b)
			{
	             balance=b+balance;
	             cout<<"your balance is deposited"<<endl;
			}
		
			void withdraw(int c)
			{int a;
				cout<<"account no in from which you withdraw cash"<<endl;
				cin>>a;
				if(a==accountno)
				{
					cout<<"pkr "<<c<<"had been withdrawn"<<endl;
				}
				else
				cout<<"invalid account no"<<endl;
			}
			void display()
			{
				cout<<name<<endl;
				cout<<balance<<endl;
				cout<<type<<endl;
				cout<<accountno<<endl;
			}

		};
		main()
		{
			Bank n1;
			int b;
				n1.display();
			 cout<<"enter the balance you want to deposited"<<endl;
	             cin>>b;
			n1.deposit(b);
			n1.withdraw(10000);
		}

