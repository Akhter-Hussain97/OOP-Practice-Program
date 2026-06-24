#include<iostream>
using namespace std;
class B;
class A{
	private:
		int num1;
	public:
		void get_value(){
			cout<<"Enter the value of num1 "<<endl;
			cin>>num1;
		}
		friend void add(A,B);
};
class B{
	private:
		int num2;
	public:
		void get_value(){
			cout<<"Enter the value of num2 "<<endl;
			cin>>num2;
		}
		 friend void add(A,B);
};
   void add(A obj1, B obj2){
	int Sum=obj1.num1+obj2.num2;
	cout<<"The sum is "<<Sum<<endl;
}
int main(){
	A obj1;
	B obj2;
	obj1.get_value();
	obj2.get_value();
	add(obj1,obj2);
}