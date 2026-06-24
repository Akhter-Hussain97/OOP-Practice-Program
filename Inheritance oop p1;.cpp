#include<iostream>
using namespace std;
class Animal{
	public:
		int leg=4;
};
class Dog:public Animal{
	public:
		int tail=1;
};
int main(){
	Dog d;
	cout<<d.tail<<endl;
	cout<<d.leg<<endl;
}