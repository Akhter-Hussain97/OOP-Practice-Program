#include<iostream>
#include<string>
using namespace std;
class Employee {
	private:
	int Eid;
	string Ename;
	double Esalary;
	public:
	void getinput(){
 cout<<"enter the Employee id and salary"<<endl;
 cin>>Eid>>Esalary;
 cin.ignore();
 cout<<"enter the Employee name"<<endl;
 getline(cin,Ename);
 
}
  void showoutput(){
  	cout<<"Employee Name is ="<<Ename<<endl;
  	cout<<"Employee ID is ="<<Eid<<endl;
  	cout<<"Employee Salary is ="<<Esalary<<endl;
  }	
  void set(int eid, string ename,double esalary){
  	eid=Eid;
  	ename=Ename;
  	esalary=Esalary;
  }
  int returnSalary(){
  	return Esalary;
  }
  bool operator>(const Employee& other) {
			return Esalary > other.Esalary;
		}
};
int main(){
	Employee E1,E2;
	E1.getinput();
	E2.getinput();
	E1.showoutput();
	E2.showoutput();
	if(E1>E2){
		E1.showoutput();
	}
		else
		{
		E2.showoutput();
	}
}