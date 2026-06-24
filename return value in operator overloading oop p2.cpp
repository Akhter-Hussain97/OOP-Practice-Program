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
	Test operator +(Test obj){
		Test t;
		t.n=n+obj.n;
		return t;
	}
		Test operator -(Test obj){
		Test t;
		t.n=n- obj.n;
		return t;
	}
		Test operator *(Test obj){
		Test t;
		t.n=n *obj.n;
		return t;
	}
		Test operator /(Test obj){
		Test t;
		t.n=n/obj.n;
		return t;
	}
	int display(){
		return n;
	}
};
int main(){
	Test obj1, obj2, sum, subst,div, mult;
	obj1.getvalue();
	obj2.getvalue();
	sum=obj1+obj2;
	cout<<sum.display();
	subst=obj1-obj2;
	cout<<subst.display();
	mult=obj1*obj2;
	cout<<mult.display();
	div=obj1/obj2;
	cout<<div.display();
}