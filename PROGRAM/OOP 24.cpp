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
	 void inputdata(){
	 	cout<<"enter the title"<<endl;
	 	cin>>title;
	 	cout<<"enter the clubdues "<<endl;
	 	cin>>clubdues;
}
	 void outputdata(){
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
	 	void getinfo(){
	 		cout<<"enter the publication "<<endl;
	 		cin>>publication;
		 }
		 void showinfo(){
		 	cout<<"THE PUBLICATION IS ="<<publication<<endl;
		 }
	 };
	class Labourer:public Employee{
		public:
			Labourer(){}
            getdata();
            showdata();
	};

	int main(){
		Employee E1,E2("ali",97);
		E1.getdata();
		E1.showdata();
		E2.showdata();
		Manager M2("shayre",500), M1;
		M1.inputdata();
		M1.outputdata();
		M2.outputdata();
		Scientist S1,S2(5);
		S1.getinfo();
		S1.showinfo();
		S2.showinfo();
	}