#include<iostream>
#include<conio.h>
using namespace std;
class A{
	private:
		string name;
	public:
	A(string n){
		name=n;
	}
};
class B {
	private:
		int rollno;
	public:
	B(int rn){
		rollno=rn;
	}
};
class C: public A,public B{
	private:
	int age;
	public:
	C(int ag){
	age=ag;
	}
};
int main(){
  C obj("akhter",97,20);	
}