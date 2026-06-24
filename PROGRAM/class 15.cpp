#include<iostream>
using namespace std;
class test {
	int n;
	public:
	test(){
		n=0;
	}
	void operator++(){
	++n;
	}
		void operator++(int){
	n++;
	}
	void show(){
		cout<<n<<endl;
	}
};
int main(){
	test t;
	t.show();
	++t;
	t.show();
	t++;
	t.show();
}