#include<iostream>
using namespace std;
class employee{
	static int id;
	public:
	employee(){
	 	id++;
	}
	void show(){
		cout<<"the employee id is ="<<id<<endl;
	}
};
int employee::id=54;
int main(){
	employee e2;
	e2.show();
	employee e3;
	e3.show();
	employee e4;
	e4.show();
	employee e1;
	e1.show();
	
}