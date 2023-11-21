//      NAME    :    ASAD BASHIR                             ROL NO   :   75
#include<iostream>
using namespace std;
class bank2
{
	private:
		int amount2;
		int sum;
		int subtract;
		string name;
		int acc_no;
		string acc_type;
		int b_amount;
		int amount;
		public:
			display3()	{
				cout<<"**********CUSTOMER  DATA*********** "<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Enter Name Of Depositer "<<endl;
				cin>>name;
				cout<<"Enter Account No"<<endl;
				cin>>acc_no;
				cout<<"Enter Account Type "<<endl;
				cin>>acc_type;
				cout<<"Enter Amount"<<endl;
				cin>>b_amount;
			}
				int deposit( int amount)
			{
				cout<<"Enter Amount To Deposit = ";
				cin>>amount;
				cout<<endl;
				cout<<"Your Amount Before Deposit Is RS = "<<b_amount<<endl;
				cout<<"You Deposit  "<<amount<<"  Rupees"<<endl;
				cout<<endl;
				sum=b_amount+amount;
				cout<<"Your Amount After Deposit Is RS = "<<sum<<endl;
				cout<<endl;
				cout<<endl;
			}
						int withdraw( int amount2)
			{
				cout<<endl;
				cout<<"Enter Amount U Want To Withdraw = ";
				cin>>amount2;
				cout<<endl;
				cout<<"Your Current Balance Is RS = "<<b_amount<<endl;
				cout<<endl;
				if(amount2>b_amount)
				{
					cout<<"Your Current Balance Is less Then The Amount You Entered For Withdraw"<<endl;
				}
				else 
				{
					//cout<<"***********"<<endl;
					cout<<"Withdraw Successful"<<endl;
					//cout<<"***********"<<endl;
				
				}
				subtract=b_amount-amount2;
				if(amount2>b_amount)
				{
				cout<<"."<<endl;
			}
			else
			{
				cout<<"Your Balance After Withdraw Is = "<<subtract<<endl;
			
			}
			cout<<endl;
			cout<<endl;
		    }
		    	void display()
			{
				cout<<"**********ACCOUNT DETAILS**********"<<endl;
				cout<<endl;
				cout<<endl;
				cout<<"Client  NAME = "<<name<<endl;
				cout<<"Account NUMBER = "<<acc_no<<endl;
				cout<<"Amount = "<<b_amount<<endl;
				cout<<endl;
				cout<<endl;
			}
			void thanks()
			{
					cout<<"*************THANK YOU***FOR***USING OVER***SERVICE****************"<<endl;
			}
			bank2 operator +(bank2 p)
			{
			
				bank2 temp;
				 temp.amount=p.amount+amount;
				temp.amount2=p.amount2+amount2;
			return temp;
			}
		};
	int main()
{
	int num;
	int a;
	int b;
	int t;
	int d;
	
	bank2 acc,x,y;
	acc.display3();
	x.display3();
    char ch;
    cout<<endl;
	cout<<"press small or capital 'S' if u want to DISPLAY data"<<endl;
	cout<<"press small or capital 'D' if u want to DEPOSIT data"<<endl;
	cout<<"press small or capital 'W' if u want to WITHDRAW data"<<endl;
	cout<<"press snall or capital 'E'  if u want to EXIT"<<endl<<endl;
	cin>>ch;
	switch(ch)
	{
		case 's':
		case 'S':
		acc.display();
	
		break;
		case 'd':
		case 'D':
		a=acc.deposit(num);
		cout<<a<<endl;
			
		t=x.deposit(num);
	    cout<<t<<endl;
	    
	    b=acc.withdraw(num);
		cout<<b<<endl;
		
		d=x.withdraw(num);
	
		cout<<d<<endl;
	
		break;
	    case 'w':
	    case 'W':
		b=acc.withdraw(num);
		cout<<b<<endl;
	
		break;
		case 'e':
		case  'E':
		acc.thanks();
		break;
		default:
		cout<<"invalid"<<endl;	
	}
	y=acc+x;
}