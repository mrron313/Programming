#include<iostream>
#include<cstring>

using namespace std;

class Account{
	static int c;
	char AccNo[10];
	char AccType[15];
	double balance;
	
	public:
		Account(){c++;}
		
		Account(char *n, char *type, double d){
			strcpy(AccNo,n);
			strcpy(AccType,type);
			balance=d;
			c++;
		}
		void showInfo(){
			cout << "Account Number: " << AccNo << endl;
			cout << "Account Type: " << AccType << endl;
			cout << "Balance : " << balance << endl << endl;
		}
		
		void totalObject();
		
		void blChange(double b){
			balance+=b;
		}
	
		void twoaccSum(Account &ac){
			ac.blChange(200.0);
			cout << "Two Account sum: " << ac.balance+balance << endl << endl;
		}
		
};

int Account::c=0;

void Account::totalObject()
{
	cout << "Total Oject: " << c << endl;	
}

int main(){
	
	Account ac1("12345","Current",500);
	Account ac2("13465","Fixed",8900);
	Account ac3;
	ac3 = ac2;

	ac2.totalObject();

	ac1.showInfo();
	ac2.showInfo();
	ac3.showInfo();
	
	ac2.twoaccSum(ac1);
	
	ac1.showInfo();

	
	return 0;
}
