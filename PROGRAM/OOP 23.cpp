#include<iostream>
#include<string.h>
using namespace std;
const int SIZE=10;
class Person{
	private:
	int id;
	char name[SIZE];
	public:
      Person():id(0){
      	strcpy(name,"");
	  }
	  Person(int i,const char n[]):id(i)
	  {
	  	strcpy(name,n);
	  }
	  void getdata(){
	  	cout<<"enter the id "<<endl;
	  	cin>>id;
	  	cout<<"enter the name"<<endl;
	  	cin>>name;
	  }
	  void showdata(){
	  	cout<<"PERSON ID IS="<<id<<endl;
	  	cout<<"PERSON NAME IS="<<name<<endl;
	  }
};
class Teacher:public Person{
	private:
		int publication;
		double salary;
	public:
	Teacher():Person(),publication(0),salary(0.0){}
	Teacher(int i,const char n[],int pub, double sal):Person(i,n),publication(pub),salary(sal){}
	void getedu(){
		getdata();
		cout<<"enter the publication"<<endl;
		cin>>publication;
		cout<<"enter the salary"<<endl;
		cin>>salary;
	}
	void getshow(){
		showdata();
		cout<<"THE PUBLICATION IS="<<publication<<endl;
		cout<<"THE SALARY IS="<<salary<<endl;
	}
};
int main(){
	 Teacher T1(8,"ali",12,4000),T2;
	T1.getedu();
	T1.getshow();
	T1.showdata();
	T2.getdata();
	T2.showdata();
}