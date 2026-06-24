#include<iostream>
using namespace std;
class Teacher{
	private:
		char Tname[20], Taddress[20];
		int age;
	public:
		void InputT(){
			cout<<"Enter the Teacher Name"<<endl;
			cin>>Tname;
			cout<<"Enter the Teacher address"<<endl;
			cin>>Taddress;
			cout<<"Enter the Teacher age "<<endl;
			cin>>age;
		}
		void OutputT(){
		cout<<"The Teacher Name is "<<Tname<<endl;
		cout<<"The Teacher Address is "<<Taddress<<endl;
		cout<<"The Teacher  age is "<<age<<endl;
		}
};
class WRITER{
	private:
		char Wname[20], Waddress[20];
		int NofBW;
	public:
			void InputW(){
			cout<<"Enter the Writer name"<<endl;
			cin>>Wname;
			cout<<"Enter the Address of Writer"<<endl;
			cin>>Waddress;
			cout<<"Enter the No of BOOK writen by Writer "<<endl;
			cin>>NofBW;
		}
		void OutputW(){
		cout<<"The W_Name is "<<Wname<<endl;
		cout<<"The W_Address is "<<Waddress<<endl;
		cout<<"The No of BOOk Written By the Writer is "<<NofBW<<endl;
		}
};
class Scholar: public Teacher, public WRITER{
	public:
		Scholar(){
			cout<<"Scholar Class"<<endl;
		}
		void Show(){
		Scholar::InputT();
		Scholar::OutputT();
		Scholar::InputW();
		Scholar::OutputW();
	}
		
};
int main(){
	Scholar obj;
	obj.Show();
}