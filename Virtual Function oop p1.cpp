#include<iostream>
using namespace std;
class Person{
	private:
		char name[20], gender[20];
		int age;
	public:
	void Input_P(){
			cout<<"Enter the Name "<<endl;
			cin>>name;
			cout<<"Enter the Gender "<<endl;
			cin>>gender;
			cout<<"Enter the Age "<<endl;
			cin>>gender;
		}
		void Output_P(){
			cout<<"The Name of a Person is "<<name<<endl;
			cout<<" Its Gender Is "<<gender<<endl;
			cout<<"And its Age is "<<age<<endl;
	}
};
class Emp: public Person{
	private:
		double Salary;
	public:
		void Input_P(){
			cout<<"Enter the Salary of a Person "<<endl;
			cin>>Salary;
		}
		void Output_P(){
			cout<<"The Salary of a Person is "<<Salary<<endl;
		}
};
class Prog: public Emp{
	private:
		int id;
	public:
			void Input_P(){
			cout<<"Enter the ID of a Person "<<endl;
			cin>>id;
		}
		void Output_P(){
			cout<<"The ID of a Person is "<<id<<endl;
		}
};
int main(){
	Person p;
	Emp E;
	Person *ptr;
	Emp *pt;
	ptr=&p;
	pt=&E;
	Prog P1;
	Prog *pr;
	pr=&P1;
		ptr->Input_P();
		pt->Input_P();
		pr->Input_P();
	ptr->Output_P();
	pt->Output_P();
	pr->Output_P();
}