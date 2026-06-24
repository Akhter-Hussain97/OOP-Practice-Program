#include<iostream>
using namespace std;
class parent{
	public:
	parent(){
		cout<<"parent constructor is called"<<endl;
	}
		~parent(){
		cout<<"parent destructor is called"<<endl;
	}
};
class child1: public parent{
	public:
	child1(){
		cout<<"child1 constructor is called "<<endl;
	}
   ~child1(){
   	cout<<"child1 destructor is called"<<endl;
   }
};
class child2: public child1{
	public:
	child2(){
		cout<<"child2 constructor is called "<<endl;
	}
   ~child2(){
   	cout<<"child2 destructor is called"<<endl;
   }
};
main(){
	child2 c;
}