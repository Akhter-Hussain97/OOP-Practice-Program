#include<iostream>
using namespace std;
class student{
	int id;
	string name;
	public:
	void input(){
	cout<<"enter the id and name "<<endl;
	cin>>id;
	cin.ignore();
	getline(cin,name);
	}
	void out(){
		cout<<"student id is="<<id<<endl;
		cout<<"student name is ="<<name<<endl;
	}
};
 int main(){
 student s1;
 s1.input();
 student s2(s1);
 s1.out();
 s2.out();
 }
 