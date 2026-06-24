#include<iostream>
using namespace std;
class oop{
	private:
		int a=50;
		int b=100;
	public:
	oop(int x,int y){
	 x=a;
	 y=b;
	}
	product(){
	 return a*b;
	}
};
int main(){
	oop t1(50,100);
    	cout<<t1.product();
	
}