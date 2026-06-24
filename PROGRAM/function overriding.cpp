#include<iostream>
using namespace std;
class parent{
	private:
	 string name;
	 int age;
	 int id;
	public:
		void input(string n,int ag,int Id){
			n=name;
			ag=age; id=Id;
		}
	void show(){
		cout<<"Name"<<name<<endl;
		cout<<"Age"<<age<<endl;
		cout<<"ID"<<id<<endl;
	}
};
class child:public parent{
		private:
	 string name;
	 int age;
	 int id;
	public:
		void input(string n,int ag,int Id){
			n=name;
			ag=age; id=Id;
		}
	void show(){
		cout<<"Name"<<name<<endl;
		cout<<"Age"<<age<<endl;
		cout<<"ID"<<id<<endl;
	}
};
int main(){
	child c;
	c.input("akhter",30,4492);
	c.show();
	c.parent::input("ali",40,2232);
	c.parent::show();
	
}