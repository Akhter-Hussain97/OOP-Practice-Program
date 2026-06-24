#include<iostream>
using namespace std;
class Student{
	private:
		string uniname;
		string degree;
	public:
		Student():uniname(""),degree(""){}
	void getdata(){
		cout<<"enter the university name"<<endl;
		cin>>uniname;
		cout<<"enter the degree "<<endl;
		cin>>degree;
	}
	void showdata(){
		cout<<"the name is="<<uniname<<endl;
		cout<<"the degree="<<degree<<endl;
	}
};
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
class Manager:public Student,public Employee{
	private:
		string title;
		int clubdues;
	public:
		Manager():title(""),clubdues(0){}
		Manager(string til,int cbdu):title(til),clubdues(cbdu){}
	 void getdata(){
	 	Student::getdata();
	 	cout<<"enter the title"<<endl;
	 	cin>>title;
	 	cout<<"enter the clubdues "<<endl;
	 	cin>>clubdues;
}
	 void showdata(){
	 	Student::showdata();
	 	cout<<"THE TITLE IS="<<title<<endl;
	 	cout<<"THE CLUBDUES IS="<<clubdues<<endl;
	 }
	 };
	 class Scientist:public Student,public Employee{
	 	private:
	 		int publication;
	 	public:
	 		Scientist():publication(0){}
	 		Scientist(int pub):publication(pub){}
	 	void getdata(){
	 		Employee::getdata();
	 		cout<<"enter the publication "<<endl;
	 		cin>>publication;
		 }
		 void showdata(){
		 	Employee::showdata();
		 	cout<<"THE PUBLICATION IS ="<<publication<<endl;
		 }
	 };
	class Labourer:public Employee{
	
	};
	int main(){
	Scientist S1;
	S1.getdata();
	S1.showdata();
	Manager M1;
	M1.getdata();
	M1.showdata();
	}