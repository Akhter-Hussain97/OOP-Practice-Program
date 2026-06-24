#include<iostream>
using namespace std;
class test{
	private:
		static int count;
	public:
		test(){
			count++;
			objshow();
				system("cls");
		}
	 void objshow(){
	 	cout<<"the obj is created"<<count<<endl;
	 } 
};
int test::count=0;
main(){
	test t1,t2;
	test a2; 
}
