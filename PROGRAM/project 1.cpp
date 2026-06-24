#include<iostream>
#include<cstring>
using namespace std;
class Bank {
	private:
		string  name,accounttype;
	     long int Accountno;
		 int totalamount;
	public:
		Bank() {
			cout<<"enter the name of the account holder"<<endl;
			getline(cin,name);
			cin.ignore();
			cout<<"enter the acccont type"<<endl;
			cin>>accounttype;
			cout<<"enter the account number"<<endl;
			cin>>Accountno;
			cout<<"enter the total amount in the bank"<<endl;
			cin>>totalamount;
		}
		void display(){
			cout<<"name of account holder="<<name<<endl;
			cout<<"account type="<<accounttype<<endl;
			cout<<"account Number="<<Accountno<<endl;
			cout<<"total amount= "<<totalamount<<endl;
		}

};
int main() {
	Bank b;
	b.display();
}