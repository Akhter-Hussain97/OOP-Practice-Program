#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		int number;
	public:
		Employee():name(""),number(0){}
		Employee(string n,int no):name(n),number(no){}
	void getdata(){
		cout<<"enter the string "<<endl;
		getline(cin,name);
		cin.ignore();
		cout<<"enter the number"<<endl;
		cin>>number;
	}
	 void showdata(){
	 	cout<<"THE NAME IS ="<<name<<endl;
	 	cout<<"THE NUMBER IS ="<<number<<endl;
	 }
};
class Manager:public Employee{
	private:
		string title;
		int clubdues;
	public:
		Manager():title(""),clubdues(0){}
		Manager(string til,int cbdu):title(til),clubdues(cbdu){}
	 void getdata(){
	 	cout<<"enter the title"<<endl;
	 	cin>>title;
	 	cout<<"enter the clubdues "<<endl;
	 	cin>>clubdues;
}
	 void showdata(){
	 	cout<<"THE TITLE IS="<<title<<endl;
	 	cout<<"THE CLUBDUES IS="<<clubdues<<endl;
	 }
	 };
	 class Scientist:public Employee{
	 	private:
	 		int publication;
	 	public:
	 		Scientist():publication(0){}
	 		Scientist(int pub):publication(pub){}
	 	void getdata(){
	 		cout<<"enter the publication "<<endl;
	 		cin>>publication;
		 }
		 void showdata(){
		 	cout<<"THE PUBLICATION IS ="<<publication<<endl;
		 }
	 };
	class Labourer:public Employee{
	
	};
	class Foreman:public Labourer{
		private:
			float quotes;
		public:
		void getdata(){
			Employee::getdata();
			cout<<"enter the quotes"<<endl;
			cin>>quotes;
		}
		void showdata(){
			Employee::showdata();
			cout<<"the quotes is="<<quotes<<endl;
		}
	};

	int main(){
	Foreman L1;
	L1.getdata();
		L1.showdata();
	Scientist S1;
	S1.getdata();
	S1.showdata();
	Manager M1;
	M1.getdata();
	M1.showdata();
	}