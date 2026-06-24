#include<iostream>
using namespace std;
class Employee{
	private:
	  int Eid;
	  string Ename;
	  double Esalary;
	public:
	  void Getdata(){
	  	cout<<"enter the id of the employee"<<endl;
	  	cin>>Eid;
	  	cin.ignore();
	  	cout<<"enter the name of the employee"<<endl;
	  	getline(cin,Ename);
	  	cout<<"enter the salary of the employee"<<endl;
	  	cin>>Esalary;
	  }
     void Showdata(){
     	cout<<"EMPLOYEE ID="<<Eid<<endl;
     	cout<<"EMPLOYEE NAME="<<Ename<<endl;
     	cout<<"EMPLOYEE SALARY="<<Esalary<<endl;
	 }
	 double ReturnSalary(){
	 	return Esalary;
	 }
};
int main(){
	Employee E1,E2;
	E1.Getdata();
	E2.Getdata();
	if(E1.ReturnSalary()>E2.ReturnSalary())
	E1.Showdata();
	else if(E2.ReturnSalary()>E1.ReturnSalary())
	E2.Showdata();
	else
	cout<<"All THE SAME"<<endl;
}
	
	
	
