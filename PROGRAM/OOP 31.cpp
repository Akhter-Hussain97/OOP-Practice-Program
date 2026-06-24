#include<iostream>
using namespace std;
class Animal{
	public:
  virtual void speak()=0;
};
class Dog:public Animal{
	public:
		void speak()
		{
		cout<<"Bhawo bhawo"<<endl;
	}
};
class Cat:public Animal{
	public:
		void speak()
		{
		cout<<"Mayoo Mayoo"<<endl;
	}
};
class Cow:public Animal{
	public:
		void speak()
		{
		cout<<"Awoo Awoo"<<endl;
	}
};
class Horse:public Animal{
	public:
		void speak()
		{
		cout<<"Hoo Hoo"<<endl;
	}
};
class Snake:public Animal{
	public:
		void speak()
		{
		cout<<"Ssss SSss"<<endl;
	}
};
int main(){
	Animal* ptr[5];
	Dog d1;
	Cow c1;
	Horse h1;
	Snake s1;
	Cat c11;
	ptr[0]=&d1;
	ptr[1]=&c1;
	ptr[2]=&h1;
	ptr[3]=&c11;
	ptr[4]=&s1;
	int opt;
	cin>>opt;
	if(opt==1)
	ptr[0]=new Dog();
	else if(opt==2)
	ptr[1]=new Cow();
	else if(opt==3)
	ptr[2]=new Horse();
	else if(opt==4)
	ptr[3]=new Cat();
	else if(opt==5)
	ptr[4]=new Snake();
	else
	cout<<"invalid input"<<endl;

	ptr[0]->speak();
	ptr[1]->speak();
	ptr[2]->speak();
	ptr[3]->speak();
	ptr[4]->speak();
}