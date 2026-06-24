#include<iostream>
using namespace std;
class Test{
	private:
		int n;
	public:
		void getvalue(){
		cout<<"Enter the value of n "<<endl;
		cin>>n;
	}
	void operator +(Test obj){
		int Sum;
		Sum=n+ obj.n;
		cout<<"The sum is "<<Sum<<endl;
	}
};
int main(){
	Test obj1, obj2;
	obj1.getvalue();
	obj2.getvalue();
	obj1+obj2;
}