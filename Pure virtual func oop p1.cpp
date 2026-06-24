#include<iostream>
using namespace std;
class Person{
	public:
		virtual void Show()=0;
};
class Emp: public Person{
	public:
	void Show(){
		cout<<"THIS IS EMPLOYEE CLASS"<<endl;
	}
};
class Teacher: public Emp{
		public:
	void Show(){
		cout<<"THIS IS TEACHER CLASS"<<endl;
	}
};
int main(){
	Person *obj[2];
	obj[0]=new Emp;
	obj[1]=new Teacher;
	obj[0]->Show();
	obj[1]->Show();
}