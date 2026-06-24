#include<iostream>
using namespace std;
template<class type>
class Test{
	private:
		type n;
	public:
	void getvalue(){
		cout<<"enter the value of n "<<endl;
		cin>>n;
	}
	void showvalue(){
		cout<<"The value of n is "<<n<<endl;
	}
};
int main(){
	Test<int> Intobj;
	Intobj.getvalue();
	Intobj.showvalue();
	Test<char> Charobj;
	Charobj.getvalue();
	Charobj.showvalue();
}