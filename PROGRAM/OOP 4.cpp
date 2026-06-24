#include<iostream>
using namespace std;
class Person{
	private:
		int Pid;
		 string Pname;
		 double Psalary;
	public:
		void setdata(int id, string name, double salary)
          {
         Pid=id;
         Pname=name;
         Psalary=salary;
		  }
		void showdata(){
			cout<<"PERSON ID ="<<Pid<<endl;
			cout<<"PERSON NAME ="<<Pname<<endl;
			cout<<"PERSON SALARY ="<<Psalary<<endl;
		}
		double setsalary(){
		return Psalary;
		}
	};
  int main(){
  	Person p1,p2,p3;
  	p1.setdata(34, "Akbar",40000);
  	p2.setdata(45,"Akhtar",6000);
  	p3.setdata(80,"Ali",90000);
  	cout<<"FIRST PERSON INFORMATION"<<endl;
  	p1.showdata();
  	cout<<"SECOND PERSON INFORMATION"<<endl;
  	p2.showdata();
  	cout<<"THIRD PERSON INFORMATION"<<endl;
  	p3.showdata();
  	if(p1.setsalary()>p2.setsalary()&&p1.setsalary()>p3.setsalary()){
  	p1.showdata();
  }
  	else if(p2.setsalary()>p1.setsalary()&&p2.setsalary()>p3.setsalary()){
  	p2.showdata();
  }
  	else if(p3.setsalary()>p1.setsalary()&&p3.setsalary()>p2.setsalary()){
  	p3.showdata();
  }
  	else 
  	{
  	cout<<"all the same"<<endl;
  }
  	
  }
		