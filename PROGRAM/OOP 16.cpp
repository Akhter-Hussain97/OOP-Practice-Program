#include<iostream>
using namespace std;
class Test {
	int n;
	public:
	Test():n(0){};
	void operator++(){
		++n;
	}
		void operator++(int){
		n++;
	}
		void operator--(){
		--n;
	}
		void operator--(int){
		--n;
	}
	void display(){
		cout<<"the no is"<<n<<endl;
	}
};
int main(){
	Test t1,t2;
	t1.display();
	++t1;
	t1.display();
	t2++;
	t2.display();
	t1--;
	t1.display();
	--t2;
	t2.display();
	
	
}