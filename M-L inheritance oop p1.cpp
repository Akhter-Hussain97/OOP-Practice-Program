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
		void Input_E(){
			Emp::Input_P();
			cout<<"Enter the Salary of a Person "<<endl;
			cin>>Salary;
		}
		void Output_E(){
			Emp::Output_P();
			cout<<"The Salary of a Person is "<<Salary<<endl;
		}
};
class Prog: public Emp{
	private:
		int id;
	public:
			void Input_Pg(){
				Prog::Input_E();
			cout<<"Enter the ID of a Person "<<endl;
			cin>>id;
		}
		void Output_Pg(){
			Prog::Output_E();
			cout<<"The ID of a Person is "<<id<<endl;
		}
};
int main(){
	Prog P1;
	P1.Input_Pg();
	P1.Output_Pg();
}