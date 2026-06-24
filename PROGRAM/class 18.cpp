#include<iostream>
#include<cstring>
using namespace std;
class person{
 private:
 	string name;
 	int id;
 	string country;
 	public:
 person():name("akhter hussain"),id(321),country("pakistan"){
	 }
  person(string n,int i,string c):name(n),id(i),country(c){}
  void show(){
       cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Country: " << country << endl;
  }
};
class employee:public person{
	private:
	char name[10];
	int salary;
	int age;
	public:
	void input(){
		cout<<"enter the employee details "<<endl;
		cin>>name>>salary>>age;
	}
	void output(){
		cout<<"name"<<name<<endl;
		cout<<"salary"<<salary<<endl;
		cout<<"age"<<age<<endl;
	}
};
int main(){
  person p1;
  p1.show();
  employee e1;
  e1.input();
  e1.output();
}