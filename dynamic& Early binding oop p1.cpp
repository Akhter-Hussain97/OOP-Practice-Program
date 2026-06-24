#include<iostream>
using namespace std;
class Person{
	public:
	virtual	void Show(){
			cout<<"This is Person class"<<endl;
		}
};
class Emp: public Person{
	public:
	void Show(){
			cout<<"This is Employee class"<<endl;
		}
	};
class Teacher: public Emp{
	public:
	void Show(){
			cout<<"This is Teacher class"<<endl;
		}
	};
int main(){
	Person *p[5];
	int op,i,len;
	cout<<"How many obj do you want to create "<<endl;
	cin>>len;
	cout<<"Enter the option :\n 1 for person\n 2 for Employee \n 3 for Teacher "<<endl;
	for(i=0; i<len; i++){
	cin>>op;
	if(op==1){
		p[i]=new Person;
	}
	else if(op==2){
		p[i]=new Emp;
	}
	else if(op==3){
		p[i]=new Teacher;
	}
}
	for(i=0; i<len; i++)
	p[i]->Show();

}