#include<iostream>
using namespace std;
class test {
	int a;
	public:
	test(int z){
	   z=a;
	}
	test operator+(test t2){
		test t3(0);
		t3.a=a+t2.a;
		return t3;
	}
	void display(){
		cout<<"value="<<a<<endl;
	}
};
int main(){
	test t1(5);
	test t2(9);
	test sum(0);
	sum=t1+t2;
	sum.display();	
}