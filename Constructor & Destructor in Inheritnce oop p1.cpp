#include<iostream>
using namespace std;
class Parent{
	public:
		Parent(){
			cout<<"I AM A PARENT CONSTRUCTOR"<<endl;
		}
			~Parent(){
			cout<<"I AM A PARENT DESSTRUCTOR"<<endl;
		}
};
class Child1: public Parent{
	public:
		Child1(){
			cout<<"I AM A 	CHILD1 CONSTRUCTOR"<<endl;
		}
			~Child1(){
			cout<<"I AM A CHILD1 DESSTRUCTOR"<<endl;
		}
};
class Child2: public Parent{
	public:
		Child2(){
			cout<<"I AM A 	CHILD2 CONSTRUCTOR"<<endl;
		}
			~Child2(){
			cout<<"I AM A CHILD2 DESSTRUCTOR"<<endl;
		}
};
int main(){
	Child2 C;
	Child1 c;
}
